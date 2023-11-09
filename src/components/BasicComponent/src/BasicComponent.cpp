#include "../inc/BasicComponent.h"
#include "../../../hooks/Hooks.h"
#include "../../../common.h"
#include "../../../player/PlayerManager.h"
#include "../../../database/DatabaseManager.h"

void BasicComponent::LoadComponent()
{
    // Database *db = g_dbManager->GetDatabase("test_connection");
    // if (db == nullptr)
    //     return;

    // if (!db->IsConnected())
    //     db->Connect();

    // if (db->HasError())
    // {
    //     PRINTF("BasicComponent", "An error has been encountered while trying to connect to database: %s\n", db->GetError());
    //     return;
    // }

    // std::vector<std::map<const char *, std::any>> results = db->Query(string_format("insert into accounts (name) values ('%s')", "skuzzi47").c_str());

    // if (db->HasError())
    // {
    //     PRINTF("BasicComponent", "Query \"%s\" has encountered an error.\n%s\n", string_format("insert into accounts (name) values ('%s')", "skuzzi47").c_str(), db->GetError());
    // }
    // else
    // {
    //     for (uint32 i = 0; i < results.size(); i++)
    //     {
    //         PRINTF("BasicComponent", "Row %02d:\n", i);
    //         std::map<const char *, std::any> result = results[i];
    //         for (const auto &res : result)
    //         {
    //             PRINTF("BasicComponent", "%s: %d\n", res.first, std::any_cast<uint64>(res.second));
    //         }
    //     }
    // }
}

std::string seconds_to_time(unsigned int number)
{
    return string_format("%02d:%02d:%02d", int(number / 3600), int((number % 3600) / 60), int((number % 3600) % 60));
}

CON_COMMAND_F(sw_status, "Shows the connection status to the server.", FCVAR_CLIENT_CAN_EXECUTE | FCVAR_LINKED_CONCOMMAND)
{
    CPlayerSlot *slot = &context.GetPlayerSlot();

    PrintToClientOrConsole(slot, "Commands - Status", "userid\tname\tsteamid\t\ttime\t\tstate\n");

    for (uint16 i = 0; i < g_playerManager->GetPlayerCap(); i++)
    {
        Player *player = g_playerManager->GetPlayer(i);
        if (!player)
            continue;

        CBasePlayerController *controller = player->GetController();
        if (!controller)
            continue;

        if (player->IsFakeClient())
            PrintToClientOrConsole(slot, "Commands - Status", "#%d\t%s\t%s\t%s\t%s\n",
                                   i + 1, controller->m_iszPlayerName(), "BOT\t", seconds_to_time(player->GetConnectedTime()), player->GetEHandlerIdx() == -1 ? "Initializing" : "Active");
        else
            PrintToClientOrConsole(slot, "Commands - Status", "#%d\t%s\t%llu\t%s\t%s\n",
                                   i + 1, controller->m_iszPlayerName(), controller->m_steamID(), seconds_to_time(player->GetConnectedTime()), player->GetEHandlerIdx() == -1 ? "Initializing" : "Active");
    }
    PrintToClientOrConsole(slot, "Commands - Status", "end of status\n");
}

CON_COMMAND_F(sw_list, "Shows the players connected on the server, including the number of those.", FCVAR_CLIENT_CAN_EXECUTE | FCVAR_LINKED_CONCOMMAND)
{
    CPlayerSlot *slot = &context.GetPlayerSlot();

    PrintToClientOrConsole(slot, "Commands - List", "Connected players: %02d/%02d\n", g_playerManager->GetPlayers(), engine->GetServerGlobals()->maxClients);
    uint16 idx = 0;
    for (uint16 i = 0; i < g_playerManager->GetPlayerCap(); i++)
    {
        Player *player = g_playerManager->GetPlayer(i);
        if (!player)
            continue;

        CBasePlayerController *controller = player->GetController();
        if (!controller)
            continue;

        ++idx;
        PrintToClientOrConsole(slot, "Commands - List", "%d. %s%s (%llu)\n", idx, controller->m_iszPlayerName(), player->IsFakeClient() ? " (BOT)" : "", controller->m_steamID());
    }
}

void ShowSwiftlyCommandHelp(CCommandContext context)
{
    PRINT("Commands", "Swiftly Commands Menu");
    PRINT("Commands", "Usage: swiftly <command> [args]");
    PRINT("Commands", " credits - List Swiftly credits");
    PRINT("Commands", " cmds    - List all console commands created by plugins");
    PRINT("Commands", " cvars   - List all console variables created by plugins");
    PRINT("Commands", " plugins - Plugin Management Menu");
    PRINT("Commands", " version - Display Swiftly version");
}

CON_COMMAND_F(swiftly, "The main command for Swiftly.", FCVAR_CLIENT_CAN_EXECUTE | FCVAR_LINKED_CONCOMMAND)
{
    CPlayerSlot *slot = &context.GetPlayerSlot();
    if (args.ArgC() < 2)
    {
        ShowSwiftlyCommandHelp(context);
        return;
    }
}