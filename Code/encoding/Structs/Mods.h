#pragma once

#include <cstdint>
#include <TiltedCore/Stl.hpp>
#include <TiltedCore/Buffer.hpp>

using TiltedPhoques::String;
using TiltedPhoques::Vector;

struct Mods
{
    struct Entry
    {
        String Filename;
        uint16_t Id;

        inline bool IsLite() const noexcept
        {
            return Id & (1 << 15);
        }

        bool operator==(const Entry& acRhs) const noexcept
        {
            return Filename == acRhs.Filename && Id == acRhs.Id;
        }

        bool operator!=(const Entry& acRhs) const noexcept
        {
            return !this->operator==(acRhs);
        }
    };

    Vector<Entry> ModList{};

    Mods() = default;
    ~Mods() = default;

    bool operator==(const Mods& acRhs) const noexcept;
    bool operator!=(const Mods& acRhs) const noexcept;

    void Serialize(TiltedPhoques::Buffer::Writer& aWriter) const noexcept;
    void Deserialize(TiltedPhoques::Buffer::Reader& aReader) noexcept;
};
