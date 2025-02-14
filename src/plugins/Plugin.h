#ifndef _plugins_plugin_h
#define _plugins_plugin_h

#include <string>
#include <vector>
#include <map>
#include "../types/PluginKind.h"
#include "../types/PluginState.h"
#include "../types/EventResult.h"

class PluginEvent;

class Plugin
{
private:
    std::string name;
    PluginKind_t kind;
    PluginState_t state = PluginState_t::Stopped;
    std::string loadError = "";

public:
    Plugin(std::string m_name, PluginKind_t m_kind);
    ~Plugin();

    std::string GetName();
    PluginKind_t GetKind();

    PluginState_t GetPluginState();
    void SetPluginState(PluginState_t state);

    std::string GetLoadError();
    void SetLoadError(std::string error);

    virtual bool LoadScriptingEnvironment() = 0;
    virtual void DestroyScriptingEnvironment() = 0;
    virtual bool ExecuteStart() = 0;
    virtual bool ExecuteStop() = 0;

    virtual void ExecuteCommand(void* functionPtr, std::string name, int slot, std::vector<std::string> args, bool silent, std::string prefix) = 0;

    virtual void RegisterEventHandler(void* functionPtr) = 0;
    virtual void RegisterEventHandling(std::string eventName) = 0;
    virtual void UnregisterEventHandling(std::string eventName) = 0;

    // Returns the memory usage of the plugin in bytes
    virtual int64_t GetMemoryUsage() = 0;

    virtual std::string GetAuthor() = 0;
    virtual std::string GetWebsite() = 0;
    virtual std::string GetVersion() = 0;
    virtual std::string GetPlName() = 0;

    EventResult TriggerEvent(std::string invokedBy, std::string eventName, std::string eventPayload, PluginEvent* event);
};

#endif