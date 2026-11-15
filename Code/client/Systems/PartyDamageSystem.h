#pragma once

struct Actor;

/**
 * @brief Party damage scaling (server setting Gameplay:fPartyDamageScale, on or off).
 *
 * When on, damage that players and their summons deal to NPCs is divided by the party size,
 * so fights last as long as they would in single player. NPCs, followers and PvP keep full damage.
 * Self-contained on purpose: the damage hook only multiplies by GetMultiplier().
 */
struct PartyDamageSystem
{
    // Multiplier for a hit, 1 when scaling doesn't apply.
    static float GetMultiplier(Actor* apHitter, Actor* apHittee) noexcept;
    // The local player plus every other unique party member that is still connected, 0 outside a party.
    static size_t CountActiveMembers() noexcept;
};
