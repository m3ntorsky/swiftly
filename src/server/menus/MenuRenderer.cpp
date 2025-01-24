#include "MenuManager.h"
#include "MenuRenderer.h"

#include "../../engine/vgui/VGUI.h"
#include "../../memory/signatures/Signatures.h"
#include "../commands/CommandsManager.h"

typedef IGameEventListener2* (*GetLegacyGameEventListener)(CPlayerSlot slot);

MenuRenderer::MenuRenderer(Player* player)
{
    m_player = player;
    
    CPlayerSlot slot = player->GetSlot();

    centerMessageEvent = g_gameEventManager->CreateEvent("show_survival_respawn_status", true);
    centerMessageEvent->SetUint64("duration", 1);
    centerMessageEvent->SetInt("userid", slot.Get());
    
    playerListener = g_Signatures->FetchSignature<GetLegacyGameEventListener>("LegacyGameEventListener")(slot);
    
    menu = nullptr;
}

MenuRenderer::~MenuRenderer()
{
    HideMenu();
    g_gameEventManager->FreeEvent(centerMessageEvent);
}

void MenuRenderer::ShowMenu(std::string menu_id)
{
    if (menu != nullptr) return;

    Menu* m = g_MenuManager->FetchMenu(menu_id);
    if (m == nullptr) return;

    menu = m;
    page = 1;
    selected = 0;
    
    menu->RegeneratePage(m_player->GetSlot().Get(), page, selected);

    std::string kind = menu->GetKind();
    if(kind == "center") {
        RenderMenu();
    } else if(kind == "screen") {
        menuTextID = g_pVGUI->RegisterScreenText();
        menuPanelID = g_pVGUI->RegisterScreenPanel();
        menuPanelExtendID = g_pVGUI->RegisterScreenPanel();
        menuFooterID = g_pVGUI->RegisterScreenText();
        
        auto menuText = g_pVGUI->GetScreenText(menuTextID);
        auto menuPanel = g_pVGUI->GetScreenPanel(menuPanelID);
        auto menuPanelExtend = g_pVGUI->GetScreenPanel(menuPanelExtendID);
        auto menuFooter = g_pVGUI->GetScreenText(menuFooterID);

        menuFooter->Create(Color(255,255,255,255));
        menuFooter->SetupViewForPlayer(m_player);
        
        menuText->Create(menu->GetColor());
        menuText->SetupViewForPlayer(m_player);
        RenderMenu();
        menuText->SetPosition(0.14, 0.68);
        
        menuFooter->SetPosition(0.14, 0.27);

        menuPanel->Create(Color(18, 18, 18, 255));
        menuPanel->SetupViewForPlayer(m_player);
        menuPanel->SetText("█");
        menuPanel->SetPosition(0.13, 0.7);

        menuPanelExtend->Create(Color(18, 18, 18, 255));
        menuPanelExtend->SetupViewForPlayer(m_player);
        menuPanelExtend->SetText("█");
        menuPanelExtend->SetPosition(0.17, 0.7);
    }
}

void MenuRenderer::HideMenu()
{
    if(menu == nullptr) return;

    page = 0;
    selected = 0;
    
    std::string kind = menu->GetKind();
    if(menu->IsTemporary()) {
        std::string menuID = menu->GetID();
        g_MenuManager->UnregisterMenu(menuID);
    }
    
    menu = nullptr;
    
    if(kind == "center") {
        if(centerMessageEvent) {
            centerMessageEvent->SetString("loc_token", "Exiting...");
            playerListener->FireGameEvent(centerMessageEvent);
        }
    } else if(kind == "screen") {
        g_pVGUI->DeleteScreenText(menuFooterID);
        g_pVGUI->DeleteScreenText(menuTextID);
        g_pVGUI->DeleteScreenPanel(menuPanelID);
        g_pVGUI->DeleteScreenPanel(menuPanelExtendID);
    
        menuTextID = 0;
        menuPanelID = 0;
        menuFooterID = 0;
        menuPanelExtendID = 0;
    }
}

bool MenuRenderer::HasMenuShown()
{
    return (menu != nullptr);
}

Menu* MenuRenderer::GetMenu()
{
    return menu;
}

int MenuRenderer::GetPage() 
{ 
    return page; 
}

void MenuRenderer::SetPage(int pg)
{
    page = pg;
    selected = 0;
    menu->RegeneratePage(m_player->GetSlot().Get(), page, selected);
    RenderMenu();
}

int MenuRenderer::GetSelection() 
{ 
    return selected; 
}

void MenuRenderer::MoveSelection()
{
    if (page == 0)
        return;

    int itemsPerPage = menu->GetItemsOnPage(page);
    ++selected;
    if (itemsPerPage == selected)
        selected = 0;

    menu->RegeneratePage(m_player->GetSlot().Get(), page, selected);
    RenderMenu();
}

void MenuRenderer::RenderMenu() {
    if(!menu) return;
    std::string kind = menu->GetKind();
    if(kind == "center") {
        centerMessageEvent->SetString("loc_token", menu->GeneratedItems(m_player->GetSlot().Get(), page).c_str());
    } else if(kind == "screen") {
        auto menuText = g_pVGUI->GetScreenText(menuTextID);
        if(!menuText) return;
    
        menuText->SetText(menu->GeneratedItems(m_player->GetSlot().Get(), page));
    
        auto menuFooter = g_pVGUI->GetScreenText(menuFooterID);
        if(!menuFooter) return;
        menuFooter->SetText(menu->GenerateFooter(page));
    }
}

void MenuRenderer::RenderMenuTick()
{
    if(!menu) return;
    if(!menu->RenderEachTick()) return;

    std::string kind = menu->GetKind();
    if(kind == "center") {
        playerListener->FireGameEvent(centerMessageEvent);
    }
}

bool MenuRenderer::ShouldRenderEachTick()
{
    if(!menu) return false;
    return menu->RenderEachTick();
}

void MenuRenderer::PerformMenuAction(std::string button)
{
    if (!HasMenuShown())
        return;

    CCSPlayerController* controller = m_player->GetPlayerController();
    CSingleRecipientFilter filter(m_player->GetSlot().Get());

    if (button == g_Config->FetchValue<std::string>("core.menu.buttons.scroll"))
    {
        if (controller)
            controller->EmitSoundFilter(filter, g_Config->FetchValue<std::string>("core.menu.sound.scroll.name"), 1.0, g_Config->FetchValue<double>("core.menu.sound.scroll.volume"));

        MoveSelection();
    }
    else if (!g_Config->FetchValue<bool>("core.menu.buttons.exit.option") && button == g_Config->FetchValue<std::string>("core.menu.buttons.exit.button"))
    {
        if (controller)
            controller->EmitSoundFilter(filter, g_Config->FetchValue<std::string>("core.menu.sound.exit.name"), 1.0, g_Config->FetchValue<double>("core.menu.sound.exit.volume"));
        
        HideMenu();
    }
    else if (button == g_Config->FetchValue<std::string>("core.menu.buttons.use"))
    {
        std::string cmd = GetMenu()->GetCommandFromOption(GetPage(), GetSelection());

        if (controller && cmd != "menuexit")
            controller->EmitSoundFilter(filter, g_Config->FetchValue<std::string>("core.menu.sound.use.name"), 1.0, g_Config->FetchValue<double>("core.menu.sound.use.volume"));

        if (cmd == "menunext")
        {
            SetPage(GetPage() + 1);
        }
        else if (cmd == "menuback")
        {
            SetPage(GetPage() - 1);
        }
        else if (g_Config->FetchValue<bool>("core.menu.buttons.exit.option") && cmd == "menuexit")
        {
            if (controller)
                controller->EmitSoundFilter(filter, g_Config->FetchValue<std::string>("core.menu.sound.exit.name"), 1.0, g_Config->FetchValue<double>("core.menu.sound.exit.volume"));
            
            HideMenu();
        }
        else if (g_MenuManager->FetchMenu(cmd))
        {
            HideMenu();
            ShowMenu(cmd);
        }
        else if (starts_with(cmd, "sw_"))
        {
            CCommand tokenizedArgs;
            tokenizedArgs.Tokenize(cmd.c_str());

            std::string commandName = (tokenizedArgs[0] + 3);

            std::vector<std::string> argsplit = TokenizeCommand(cmd.c_str());
            argsplit.erase(argsplit.begin());

            if (g_commandsManager->FetchCommand(commandName) == nullptr)
                return;

            Command* command = g_commandsManager->FetchCommand(commandName);
            if (!command)
                return;

            command->Execute(m_player->GetSlot().Get(), argsplit, true, "sw_");
        }
        else if (cmd != "")
            m_player->PerformCommand(cmd);
    }
}