#include "Plugin.h"

Plugin::Plugin(std::string m_name, PluginKind_t m_kind)
{
    this->name = m_name;
    this->kind = m_kind;
}

Plugin::~Plugin() {}

std::string Plugin::GetName()
{
    return this->name;
}

PluginKind_t Plugin::GetKind()
{
    return this->kind;
}

PluginState_t Plugin::GetPluginState()
{
    return this->state;
}

void Plugin::SetPluginState(PluginState_t state)
{
    this->state = state;
}

std::string Plugin::GetLoadError()
{
    return this->loadError;
}

void Plugin::SetLoadError(std::string error)
{
    this->loadError = error;
}