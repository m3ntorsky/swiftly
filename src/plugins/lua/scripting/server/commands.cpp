#include "../core.h"

LoadLuaScriptingComponent(
    commands,
    [](LuaPlugin* plugin, lua_State* state)
    {
        luabridge::getGlobalNamespace(state)
            .beginClass<PluginCommands>("Commands")
            .addConstructor<void (*)(std::string)>()
            .addFunction("Register", &PluginCommands::RegisterCommandLua)
            .addFunction("Unregister", &PluginCommands::UnregisterCommand)
            .addFunction("RegisterRawAlias", &PluginCommands::RegisterRawAlias)
            .addFunction("RegisterAlias", &PluginCommands::RegisterAlias)
            .addFunction("UnregisterAlias", &PluginCommands::UnregisterAlias)
            .addFunction("GetAllCommands", &PluginCommands::GetAllCommands)
            .addFunction("GetCommands", &PluginCommands::GetCommands)
            .endClass();

        luaL_dostring(state, "commands = Commands(GetCurrentPluginName())");
    }
)