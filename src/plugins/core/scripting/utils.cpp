#include "../scripting.h"
#include "../../../sdk/entity/CGameRules.h"
#include "../../../hooks/FuncHook.h"
#include "../../PluginManager.h"
#include "../../../usermessages/usermessages.h"

bool scripting_IsWindows()
{
    return WIN_LINUX(true, false);
}

bool scripting_IsLinux()
{
    return WIN_LINUX(false, true);
}

std::string scripting_GetOS()
{
    return WIN_LINUX("Windows", "Linux");
}

SDKBaseClass scripting_GetCCSGameRules()
{
    SDKBaseClass val(gameRules, "CCSGameRules");
    return val;

}

std::string scripting_GetPluginPath(std::string plugin_name)
{
    Plugin* plugin = g_pluginManager->FetchPlugin(plugin_name);
    if (!plugin) return "";

    return string_format("%s/%s", g_pluginManager->GetPluginBasePath(plugin_name).c_str(), plugin->GetName().c_str());
}

PluginUserMessage scripting_GetUserMessage(std::string str)
{
    if (!starts_with(str, "0x")) return PluginUserMessage("");

    INetworkMessageInternal* msg = (INetworkMessageInternal*)(strtol(str.c_str(), nullptr, 16));
    return PluginUserMessage(msg);
}