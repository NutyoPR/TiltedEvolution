#include <Messages/SendModMessageRequest.h>
#include <Messages/ModMessage.h>

void SendModMessageRequest::SerializeRaw(TiltedPhoques::Buffer::Writer& aWriter) const noexcept
{
    ModMessage::WriteBytes(aWriter, Channel);
    Serialization::WriteVarInt(aWriter, TargetPlayerId);
    ModMessage::WriteBytes(aWriter, Data);
    aWriter.WriteBits(static_cast<uint8_t>(Scope), 8);
}

void SendModMessageRequest::DeserializeRaw(TiltedPhoques::Buffer::Reader& aReader) noexcept
{
    ClientMessage::DeserializeRaw(aReader);

    // A malformed message gets an empty channel, which every handler rejects
    if (!ModMessage::ReadBytes(aReader, Channel))
        Channel.clear();
    TargetPlayerId = Serialization::ReadVarInt(aReader) & 0xFFFFFFFF;
    if (!ModMessage::ReadBytes(aReader, Data))
        Channel.clear();
    uint64_t scope = 0;
    if (!aReader.ReadBits(scope, 8) || scope > static_cast<uint8_t>(SkyrimTogetherAPI::ChannelScope::Nearby))
        Channel.clear();
    Scope = static_cast<SkyrimTogetherAPI::ChannelScope>(scope);
}
