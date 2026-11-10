#pragma once

#include "Message.h"

#include <Structs/GameId.h>
#include <Structs/Vector3_NetQuantize.h>

enum class OwnershipReleaseReason : uint8_t
{
    Relinquish,
    DeclineGrant,
    // The owner's game deleted a temporary actor (a script's Delete, or the Disable that precedes it): remove the
    // character for every player instead of handing it to the next owner in range.
    Deleted
};

struct RequestOwnershipTransfer final : ClientMessage
{
    static constexpr ClientOpcode Opcode = kRequestOwnershipTransfer;

    RequestOwnershipTransfer()
        : ClientMessage(Opcode)
    {
    }

    virtual ~RequestOwnershipTransfer() = default;

    void SerializeRaw(TiltedPhoques::Buffer::Writer& aWriter) const noexcept override;
    void DeserializeRaw(TiltedPhoques::Buffer::Reader& aReader) noexcept override;

    bool operator==(const RequestOwnershipTransfer& achRhs) const noexcept
    {
        return GetOpcode() == achRhs.GetOpcode() && ServerId == achRhs.ServerId && OwnershipEpoch == achRhs.OwnershipEpoch && Reason == achRhs.Reason && WorldSpaceId == achRhs.WorldSpaceId && CellId == achRhs.CellId && Position == achRhs.Position;
    }

    uint32_t ServerId{};
    uint32_t OwnershipEpoch{};
    OwnershipReleaseReason Reason{OwnershipReleaseReason::Relinquish};
    GameId WorldSpaceId{};
    GameId CellId{};
    Vector3_NetQuantize Position{};
};
