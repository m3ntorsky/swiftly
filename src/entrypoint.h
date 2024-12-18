#ifndef _entrypoint_h
#define _entrypoint_h

#ifdef _MSC_VER
#pragma warning(disable : 4005)
#pragma warning(disable : 4267)
#pragma warning(disable : 4099)
#pragma warning(disable : 4312)
#else

#endif

#define META_IS_SOURCE2 1
#define MAX_PLAYERS 64


#include <public/playerslot.h>
#include <public/inetchannelinfo.h>

#include <ISmmPlugin.h>
#include <iplayerinfo.h>
#include <igameevents.h>
#include <entity2/entitysystem.h>

#include <sh_vector.h>
#include "iserver.h"
#include "KeyValues.h"
#include <entity2/entityidentity.h>
#include <networksystem/inetworkserializer.h>
#include <networksystem/inetworkmessages.h>
#include <networksystem/inetworksystem.h>
#include <engine/igameeventsystem.h>
#include <steam/steam_api_common.h>
#include <steam/isteamugc.h>
#include <public/filesystem.h>

#include <deque>
#include <functional>
#include <any>
#include <vector>

#include "common.h"

class GameSessionConfiguration_t
{
};

class CCSGameRules;

class Swiftly : public ISmmPlugin, public IMetamodListener
{
public:
    bool Load(PluginId id, ISmmAPI* ismm, char* error, size_t maxlen, bool late);
    bool Unload(char* error, size_t maxlen);
    bool Pause(char* error, size_t maxlen);
    bool Unpause(char* error, size_t maxlen);
    void AllPluginsLoaded();
    void OnLevelInit(char const* pMapName, char const* pMapEntities, char const* pOldLevel, char const* pLandmarkName, bool loadGame, bool background);
    void OnLevelShutdown();
    void NextFrame(std::function<void(std::vector<std::any>)> fn, std::vector<std::any> param);
    void UpdatePlayers();

public:
    void Hook_StartupServer(const GameSessionConfiguration_t& config, ISource2WorldSession*, const char*);
    void Hook_GameFrame(bool simulating, bool bFirstTick, bool bLastTick);
    void Hook_ServerHibernationUpdate(bool bHibernation);
    void Hook_ClientDisconnect(CPlayerSlot slot, ENetworkDisconnectionReason reason, const char* pszName, uint64 xuid, const char* pszNetworkID);
    void Hook_OnClientConnected(CPlayerSlot slot, const char* pszName, uint64 xuid, const char* pszNetworkID, const char* pszAddress, bool bFakePlayer);
    bool Hook_ClientConnect(CPlayerSlot slot, const char* pszName, uint64 xuid, const char* pszNetworkID, bool unk1, CBufferString* pRejectReason);
    void Hook_GameServerSteamAPIActivated();
    void Hook_GameServerSteamAPIDeactivated();
    void Hook_OnClientCommand(CPlayerSlot slot, const CCommand& args);
    void Hook_CheckTransmit(CCheckTransmitInfo** ppInfoList, int infoCount, CBitVec<16384>& unionTransmitEdicts, const Entity2Networkable_t** pNetworkables, const uint16* pEntityIndicies, int nEntities, bool bEnablePVSBits);

public:
    const char* GetAuthor();
    const char* GetName();
    const char* GetDescription();
    const char* GetURL();
    const char* GetLicense();
    const char* GetVersion();
    const char* GetDate();
    const char* GetLogTag();

public:
    std::deque<std::pair<std::function<void(std::vector<std::any>)>, std::vector<std::any>>> m_nextFrame;
};

class CEntityListener : public IEntityListener
{
    void OnEntityCreated(CEntityInstance* pEntity) override;
    void OnEntitySpawned(CEntityInstance* pEntity) override;
    void OnEntityDeleted(CEntityInstance* pEntity) override;
    void OnEntityParentChanged(CEntityInstance* pEntity, CEntityInstance* pNewParent) override;
};

extern Swiftly g_Plugin;
extern ISource2Server* server;
extern IServerGameClients* gameclients;
extern IVEngineServer2* engine;
extern IServerGameClients* g_clientsManager;
extern ICvar* icvar;
extern ICvar* g_pcVar;
extern IGameResourceService* g_pGameResourceService;
extern CEntitySystem* g_pEntitySystem;
extern CGameEntitySystem* g_pGameEntitySystem;
extern IGameEventManager2* g_gameEventManager;
extern IGameEventSystem* g_pGameEventSystem;
extern CSteamGameServerAPIContext g_SteamAPI;
extern INetworkSystem* g_pNetworkSystem;
extern CCSGameRules* gameRules;

PLUGIN_GLOBALVARS();

#endif