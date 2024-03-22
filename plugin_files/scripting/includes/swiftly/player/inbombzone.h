#ifndef _player_inbombzone_h
#define _player_inbombzone_h

#include <stdint.h>
#include "../swiftly_memory.h"
#include "../swiftly_utils.h"

class InBombZone
{
private:
    uint32_t m_playerSlot;

public:
    InBombZone(uint32_t playerSlot) : m_playerSlot(playerSlot) {}
    ~InBombZone() {}

    bool Get()
    {
        REGISTER_METHOD(bool, false, scripting_Player_GetInBombZone, this->m_playerSlot);
    }

    void Set(bool val)
    {
        REGISTER_METHOD_VOID(scripting_Player_SetInBombZone, this->m_playerSlot, val);
    }
};

#endif