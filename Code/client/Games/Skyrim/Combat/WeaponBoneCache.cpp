// Zenderal: bow and crossbow aim controllers must never take a stale weapon bone.
//
// Each actor's AI process caches its bow/crossbow launch node as a raw, uncounted NiNode* (CommonLibSSE-NG:
// MiddleHighProcessData::weaponBone, +0x150 of AIProcess::middleProcess; get ID 39825, set ID 39826). The getter
// below (ID 37586) returns that cache when it is set and looks the node up in the actor's 3D only when it is empty;
// its one caller (ID 33135) builds the CombatProjectileAimController of a ranged combat context, which takes a counted
// reference to the node and releases it in its destructor (ID 44403). The game clears the cache on its own equip and
// 3D-load paths only, so a node freed some other way stays cached. In two-player Enderal sessions (2026-11-09, Fog
// Wood, archers whose equipment and 3D the session kept changing) the destructor then released freed memory and
// called a null vtable slot. Dropping the cache before the lookup makes the controller take the node from the actor's
// current 3D every time; the lookup is a name search that runs only when an archer enters a ranged combat context.

#include <Games/Skyrim/Actor.h>
#include <AI/AIProcess.h>

struct NiNode;
struct TESObjectWEAP;

TP_THIS_FUNCTION(TGetAimWeaponBone, NiNode*, Actor, TESObjectWEAP* apWeapon);
static TGetAimWeaponBone* RealGetAimWeaponBone = nullptr;

namespace
{
constexpr size_t kWeaponBoneOffset = 0x150; // MiddleHighProcessData::weaponBone

NiNode** GetWeaponBoneCache(Actor* apActor) noexcept
{
    AIProcess* pProcess = apActor ? apActor->currentProcess : nullptr;
    if (!pProcess || !pProcess->middleProcess)
        return nullptr;
    return reinterpret_cast<NiNode**>(reinterpret_cast<uint8_t*>(pProcess->middleProcess) + kWeaponBoneOffset);
}
} // namespace

NiNode* TP_MAKE_THISCALL(HookGetAimWeaponBone, Actor, TESObjectWEAP* apWeapon)
{
    NiNode** ppCache = GetWeaponBoneCache(apThis);
    if (!ppCache)
        return TiltedPhoques::ThisCall(RealGetAimWeaponBone, apThis, apWeapon);

    NiNode* pCached = *ppCache;
    *ppCache = nullptr;
    NiNode* pFresh = TiltedPhoques::ThisCall(RealGetAimWeaponBone, apThis, apWeapon);

    if (pCached && pCached != pFresh)
        spdlog::warn("Weapon bone cache of actor {:X} was stale (cached {}, now {}); using the node in its current 3D",
                     apThis->formID, static_cast<void*>(pCached), static_cast<void*>(pFresh));

    return pFresh;
}

static TiltedPhoques::Initializer s_weaponBoneCacheHooks(
    []()
    {
        POINTER_SKYRIMSE(TGetAimWeaponBone, s_getAimWeaponBone, 37586);

        RealGetAimWeaponBone = s_getAimWeaponBone.Get();

        TP_HOOK(&RealGetAimWeaponBone, HookGetAimWeaponBone);
    });
