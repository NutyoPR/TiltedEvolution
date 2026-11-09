#pragma once

/**
 * @brief Dispatched when a spell has been cast locally.
 *
 * The event is queued and handled on the next World update, so it carries plain values read at cast time and never
 * the caster itself: an actor's MagicCaster can be destroyed in between (an actor unloading or being deleted), and
 * reading a freed caster crashed MagicService::OnSpellCastEvent (Zenderal, 2026-11-09).
 */
struct SpellCastEvent
{
    SpellCastEvent(uint32_t aCasterFormId, int32_t aCastingSource, bool aIsDualCasting, uint32_t aSpellId, uint32_t aDesiredTargetID)
        : CasterFormId(aCasterFormId)
        , CastingSource(aCastingSource)
        , IsDualCasting(aIsDualCasting)
        , SpellId(aSpellId)
        , DesiredTargetID(aDesiredTargetID)
    {
    }

    uint32_t CasterFormId;
    int32_t CastingSource;
    bool IsDualCasting;
    uint32_t SpellId;
    uint32_t DesiredTargetID;
};
