import { Overlay } from '@angular/cdk/overlay';
import {
  Component,
  ElementRef,
  OnDestroy,
  OnInit,
  ViewChild,
} from '@angular/core';
import { TranslocoService } from '@ngneat/transloco';
import { takeUntil } from 'rxjs';
import { environment } from '../../../environments/environment';
import { fadeInOutActiveAnimation } from '../../animations/fade-in-out-active.animation';
import { View } from '../../models/view.enum';
import { ClientService } from '../../services/client.service';
import { TradeUiService } from '../../services/trade-ui.service';
import { DestroyService } from '../../services/destroy.service';
import { PlayerUiService } from '../../services/player-ui.service';
import {
  SettingService,
  fontSizeToPixels,
} from '../../services/setting.service';
import { Sound, SoundService } from '../../services/sound.service';
import { UiRepository } from '../../store/ui.repository';
import { ChatComponent } from '../chat/chat.component';
import { GroupComponent } from '../group/group.component';
import { controlsAnimation } from './controls.animation';
import { notificationsAnimation } from './notifications.animation';
import { map } from 'rxjs/operators';
import { VoipService } from '../../services/voip.service';

const REVEAL_EFFECT_DURATION_MS = 10000 // todo: pass value from C++?

@Component({
  selector: 'app-root',
  templateUrl: './root.component.html',
  styleUrls: ['./root.component.scss'],
  animations: [
    controlsAnimation,
    fadeInOutActiveAnimation,
    notificationsAnimation,
  ],
  host: { 'data-app-root-game': environment.game.toString() },
  providers: [DestroyService],
})
export class RootComponent implements OnInit, OnDestroy {
  /* ### ENUMS ### */
  readonly RootView = View;

  view$ = this.uiRepository.view$;
  tradeSession$ = this.tradeUiService.session$;

  connected$ = this.client.connectionStateChange.asObservable();
  menuOpen$ = this.client.openingMenuChange.asObservable();
  inGame$ = this.client.inGameStateChange.asObservable();
  active$ = this.client.activationStateChange.asObservable();
  connectionInProgress$ = this.client.isConnectionInProgressChange.asObservable();
  revealingInProgress$ = false;

  @ViewChild('chat') private chatComp!: ChatComponent;
  @ViewChild(GroupComponent) private groupComponent: GroupComponent;

  // The menu column grows past its usual width when a label word can't be broken, so the trade dock is
  // placed from where the column actually ends, published as --app-root-controls-right.
  private controlsObserver?: ResizeObserver;
  @ViewChild('controls') private set controlsElement(
    ref: ElementRef<HTMLElement> | undefined,
  ) {
    this.controlsObserver?.disconnect();
    this.controlsObserver = undefined;
    if (!ref) {
      return;
    }

    const element = ref.nativeElement;
    this.controlsObserver = new ResizeObserver(() => {
      // Layout offsets, not getBoundingClientRect, so the slide-in animation's transform doesn't move the dock.
      this.host.nativeElement.style.setProperty(
        '--app-root-controls-right',
        `${element.offsetLeft + element.offsetWidth}px`,
      );
    });
    this.controlsObserver.observe(element);
  }

  public constructor(
    private readonly destroy$: DestroyService,
    // Created here so name tag settings reach the game as soon as the UI loads.
    private readonly playerUiService: PlayerUiService,
    private readonly client: ClientService,
    private readonly sound: SoundService,
    private readonly uiRepository: UiRepository,
    private readonly translocoService: TranslocoService,
    private readonly settingService: SettingService,
    private readonly tradeUiService: TradeUiService,
    // Created at start so voice volumes and settings reach the game before any menu is opened
    private readonly voipService: VoipService,
    public readonly overlay: Overlay, // used for mockup
    private readonly host: ElementRef<HTMLElement>,
  ) {
    this.translocoService.setActiveLang(
      this.settingService.settings.language.getValue(),
    );
  }

  public ngOnInit(): void {
    this.onInGameStateSubscription();
    this.onActivationStateSubscription();
    this.onFontSizeSubscription();
  }

  public ngOnDestroy(): void {
    this.controlsObserver?.disconnect();
  }

  public onInGameStateSubscription() {
    this.client.inGameStateChange
      .pipe(takeUntil(this.destroy$))
      .subscribe(state => {
        if (!state) {
          this.closeView();
        }
      });
  }

  public onActivationStateSubscription() {
    this.client.activationStateChange
      .pipe(takeUntil(this.destroy$))
      .subscribe(state => {
        if (
          this.client.inGameStateChange.getValue() &&
          state &&
          !this.uiRepository.isViewOpen()
        ) {
          setTimeout(() => this.chatComp.focus(), 100);
        }
        if (!state) {
          this.closeView();
        }
      });
  }

  public onFontSizeSubscription() {
    this.settingService.settings.fontSize
      .pipe(
        takeUntil(this.destroy$),
        map(size => fontSizeToPixels[size]),
      )
      .subscribe(size => {
        document.documentElement.setAttribute('style', `font-size: ${size}px;`);
      });
  }

  public setView(view: View | null) {
    this.uiRepository.openView(view);

    if (view) {
      this.sound.play(Sound.Focus);
    } else if (this.chatComp) {
      this.chatComp.focus();
    }
  }

  public closeView() {
    if (this.uiRepository.getView() === View.TRADE) {
      // F2 hides the overlay through its activation animation; keep the exchange selected for reopening.
      return;
    }
    this.uiRepository.openView(null);
  }

  public reconnect(): void {
    this.client.reconnect();
  }

  public revealPlayers(): void {
    if (this.revealingInProgress$)
      return;

    this.revealingInProgress$ = true;
    setTimeout(() => { this.revealingInProgress$ = false }, REVEAL_EFFECT_DURATION_MS);

    this.sound.play(Sound.Focus);
    this.client.revealPlayers();
  }
}
