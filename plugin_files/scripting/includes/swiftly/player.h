#ifndef _swiftly_player_h
#define _swiftly_player_h

#include <stdint.h>
#include "swiftly_memory.h"
#include "types.h"
#include <cstdarg>
#include "swiftly_utils.h"

#define TEAM_NONE 0
#define TEAM_SPECTATOR 1
#define TEAM_T 2
#define TEAM_CT 3

class Player
{
private:
    uint32_t m_playerSlot;
    bool m_firstSpawn = false;
    bool m_fakeClient = false;

public:
    Player(uint32_t playerSlot, bool fakeClient) : m_playerSlot(playerSlot), m_fakeClient(fakeClient) {}
    uint32_t GetSlot() { return this->m_playerSlot; }

    const char *GetName()
    {
        void *player_GetName = FetchFunctionPtr(nullptr, "scripting_Player_GetName");
        if (player_GetName)
            return reinterpret_cast<Player_GetName>(player_GetName)(this->m_playerSlot);
        else
            return "";
    }

    uint64_t GetSteamID()
    {
        if (this->IsFakeClient())
            return 0;

        void *player_GetSteamID = FetchFunctionPtr(nullptr, "scripting_Player_GetSteamID");
        if (player_GetSteamID)
            return reinterpret_cast<Player_GetSteamID>(player_GetSteamID)(this->m_playerSlot);
        else
            return 0;
    }

    bool IsFirstSpawn() { return !this->m_firstSpawn; }
    bool IsFakeClient() { return this->m_fakeClient; }

    void SetFirstSpawn(bool val) { this->m_firstSpawn = val; }

    void Drop(ENetworkDisconnectionReason reason)
    {
        if (this->IsFakeClient())
            return;

        void *player_Drop = FetchFunctionPtr(nullptr, "scripting_Player_Drop");
        if (player_Drop)
            reinterpret_cast<Player_Drop>(player_Drop)(this->m_playerSlot, reason);
    }

    bool IsAuthenticated()
    {
        void *player_IsAuthenticated = FetchFunctionPtr(nullptr, "scripting_Player_IsAuthenticated");
        if (player_IsAuthenticated)
            return reinterpret_cast<Player_IsAuthenticated>(player_IsAuthenticated)(this->m_playerSlot);
        else
            return false;
    }

    const char *GetConvarValue(const char *name)
    {
        if (name == nullptr)
            return "";

        void *player_GetConvar = FetchFunctionPtr(nullptr, "scripting_Player_GetConvar");
        if (player_GetConvar)
            return reinterpret_cast<Player_GetConvar>(player_GetConvar)(this->m_playerSlot, name);
        else
            return "";
    }

    uint8_t GetTeam()
    {
        void *player_GetTeam = FetchFunctionPtr(nullptr, "scripting_Player_GetTeam");
        if (player_GetTeam)
            return reinterpret_cast<Player_GetTeam>(player_GetTeam)(this->m_playerSlot);
        else
            return 0;
    }

    int GetHealth()
    {
        void *player_GetHealth = FetchFunctionPtr(nullptr, "scripting_Player_GetHealth");
        if (player_GetHealth)
            return reinterpret_cast<Player_GetHealth>(player_GetHealth)(this->m_playerSlot);
        else
            return 0;
    }

    void SetHealth(int health)
    {
        void *player_SetHealth = FetchFunctionPtr(nullptr, "scripting_Player_SetHealth");
        if (player_SetHealth)
            reinterpret_cast<Player_SetHealth>(player_SetHealth)(this->m_playerSlot, health);
    }

    void TakeHealth(int health)
    {
        void *player_TakeHealth = FetchFunctionPtr(nullptr, "scripting_Player_TakeHealth");
        if (player_TakeHealth)
            reinterpret_cast<Player_TakeHealth>(player_TakeHealth)(this->m_playerSlot, health);
    }

    int GetArmor()
    {
        void *player_GetArmor = FetchFunctionPtr(nullptr, "scripting_Player_GetArmor");
        if (player_GetArmor)
            return reinterpret_cast<Player_GetArmor>(player_GetArmor)(this->m_playerSlot);
        else
            return 0;
    }

    void SetArmor(int armor)
    {
        void *player_SetArmor = FetchFunctionPtr(nullptr, "scripting_Player_SetArmor");
        if (player_SetArmor)
            reinterpret_cast<Player_SetArmor>(player_SetArmor)(this->m_playerSlot, armor);
    }

    void TakeArmor(int armor)
    {
        void *player_TakeArmor = FetchFunctionPtr(nullptr, "scripting_Player_TakeArmor");
        if (player_TakeArmor)
            reinterpret_cast<Player_TakeArmor>(player_TakeArmor)(this->m_playerSlot, armor);
    }

    void SendMsg(HudDestination dest, const char *message, ...)
    {
        va_list ap;
        char buffer[2048];

        va_start(ap, message);
        UTIL_FormatArgs(buffer, sizeof(buffer), message, ap);
        va_end(ap);

        void *player_SendMessage = FetchFunctionPtr(nullptr, "scripting_Player_SendMessage");
        if (player_SendMessage)
            reinterpret_cast<Player_SendMessage>(player_SendMessage)(this->m_playerSlot, dest, buffer);
    }
};

#endif