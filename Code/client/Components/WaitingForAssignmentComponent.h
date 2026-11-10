#pragma once

#ifndef TP_INTERNAL_COMPONENTS_GUARD
#error Include Components.h instead
#endif

struct WaitingForAssignmentComponent
{
    uint32_t Cookie;
    bool Cancelled{false};
    // Cancelled because the actor is a temporary that was deleted (or disabled) while the request was in flight: if the
    // answer makes us its owner, ask the server to remove it instead of declining the grant.
    bool Deleted{false};
};
