#pragma once

#include "Message.h"
#include <SkyrimTogetherAPI.h>

/**
 * @brief A Mod Message from a plugin, for the selected audience or one eligible recipient. Opaque to Skyrim Together.
 */
struct SendModMessageRequest final : ClientMessage
{
    static constexpr ClientOpcode Opcode = kSendModMessageRequest;

    SendModMessageRequest()
        : ClientMessage(Opcode)
    {
    }

    virtual ~SendModMessageRequest() = default;

    void SerializeRaw(TiltedPhoques::Buffer::Writer& aWriter) const noexcept override;
    void DeserializeRaw(TiltedPhoques::Buffer::Reader& aReader) noexcept override;

    bool operator==(const SendModMessageRequest& acRhs) const noexcept
    {
        return GetOpcode() == acRhs.GetOpcode() && Channel == acRhs.Channel && TargetPlayerId == acRhs.TargetPlayerId && Data == acRhs.Data && Scope == acRhs.Scope;
    }

    SkyrimTogetherAPI::ChannelScope Scope{SkyrimTogetherAPI::ChannelScope::Party};
    TiltedPhoques::String Channel;
    // 0 sends to the whole selected audience
    uint32_t TargetPlayerId{0};
    TiltedPhoques::String Data;
};
