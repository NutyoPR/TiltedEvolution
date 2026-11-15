#include <TiltedOnlinePCH.h>

#include <Systems/PartyDamageSystem.h>

#include <World.h>
#include <Services/PartyService.h>
#include <Services/TransportService.h>

#include <Games/References.h>

size_t PartyDamageSystem::CountActiveMembers() noexcept
{
    auto& world = World::Get();
    const auto& partyService = world.GetPartyService();
    if (!partyService.IsInParty())
        return 0;

    // Duplicates or players that already left must not inflate the count.
    const uint32_t cLocalId = world.GetTransport().GetLocalPlayerId();
    const auto& players = partyService.GetPlayers();
    Vector<uint32_t> counted;
    for (uint32_t id : partyService.GetPartyMembers())
    {
        if (id == cLocalId || players.find(id) == players.end())
            continue;
        if (std::find(counted.begin(), counted.end(), id) == counted.end())
            counted.push_back(id);
    }
    return counted.size() + 1;
}

float PartyDamageSystem::GetMultiplier(Actor* apHitter, Actor* apHittee) noexcept
{
    // !(x > 0) also catches NaN.
    if (!(World::Get().GetServerSettings().PartyDamageScale > 0.f) || !apHitter || !apHittee || apHitter == apHittee)
        return 1.f;

    // Only damage dealt to NPCs is scaled: PvP and self damage stay as they are.
    const auto* pExHittee = apHittee->GetExtension();
    if (!pExHittee || pExHittee->IsPlayer())
        return 1.f;

    // Players, and summons or raised corpses through their commander. Followers keep full damage.
    Actor* pSource = apHitter;
    const auto* pExSource = pSource->GetExtension();
    if (!pExSource)
        return 1.f;
    if (!pExSource->IsPlayer())
    {
        pSource = pSource->GetCommandingActor();
        pExSource = pSource ? pSource->GetExtension() : nullptr;
        if (!pExSource || !pExSource->IsPlayer())
            return 1.f;
    }

    const size_t cMembers = CountActiveMembers();
    if (cMembers < 2)
        return 1.f;

    return 1.f / static_cast<float>(cMembers);
}
