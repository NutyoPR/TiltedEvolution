#pragma once

/**
 * @brief Magic effect added to a target (i.e. an actor or object).
 */
struct AddTargetEvent
{
    AddTargetEvent() = default;

    uint32_t TargetID{};
    uint32_t CasterID{};
    uint32_t SpellID{};
    uint32_t EffectID{};
    float Magnitude{};
    bool IsDualCasting{false};
    bool ApplyHealPerkBonus{false};
    bool ApplyStaminaPerkBonus{false};
    // A cloak hit on another player. Unlike other concentration spells, it isn't replayed on the victim's client.
    bool IsPvpCloakHit{false};
};
