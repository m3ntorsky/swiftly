#pragma once

#include "CBasePlayerPawn.h"
#include "CCSPlayerPawnBase.h"
#include "CBaseViewModel.h"
#include "CCSBot.h"

class CCSPlayerPawn : public CCSPlayerPawnBase
{
public:
    DECLARE_SCHEMA_CLASS_BASE(CCSPlayerPawn)

    SCHEMA_FIELD_OFFSET(CCSPlayer_ActionTrackingServices*, m_pActionTrackingServices, 0);
    SCHEMA_FIELD_OFFSET(CCSBot*, m_pBot, 0);
    SCHEMA_FIELD_POINTER_OFFSET(CEconItemView, m_EconGloves, 0);
    SCHEMA_FIELD_OFFSET(float, m_flHealthShotBoostExpirationTime, 0);

    void GiveNamedItem(const char* item)
    {
        if (this->m_pItemServices() == nullptr)
            return;

        g_Signatures->FetchSignature<GiveNamedItem_t>("GiveNamedItem")(this->m_pItemServices(), item, 0, 0, 0, 0);
    }
};