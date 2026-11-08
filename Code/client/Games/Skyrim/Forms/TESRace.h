#pragma once

#include <Forms/TESForm.h>
#include <Components/TESFullName.h>

struct TESRace : TESForm, TESFullName
{
    // RACE_DATA::Flag
    enum : uint32_t
    {
        kPlayable = 1 << 0,
    };

    [[nodiscard]] bool IsPlayable() const noexcept { return (raceFlags & kPlayable) != 0; }

    uint8_t unk30[0x108 - 0x30];
    uint32_t raceFlags; // RACE_DATA (DATA) at 0xE8, its flags at +0x20
};

static_assert(offsetof(TESRace, raceFlags) == 0x108);
