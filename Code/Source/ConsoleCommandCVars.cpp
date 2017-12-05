#include "StdAfx.h"
#include "ConsoleCommandCVars.h"
#include <ISystem.h>
#include <CloseAllNetworkPeersGem/CloseAllNetworkPeersGemRequestBus.h>
#include <CloseAllNetworkPeersGem/ShutdownApplication.h>

using namespace CloseAllNetworkPeersGem;

void ConsoleCommandCVars::RegisterCVars()
{
    if (gEnv && !gEnv->IsEditor())
    {
        REGISTER_COMMAND(m_commandName.c_str(), CloseAll, 0,
            "Closes the server and all connected clients.");
    }
}

void ConsoleCommandCVars::UnregisterCVars()
{
    if (gEnv && !gEnv->IsEditor())
    {
        UNREGISTER_CVAR(m_commandName.c_str());
    }
}

void ConsoleCommandCVars::CloseAll(IConsoleCmdArgs* /*args*/)
{
    if (CloseAllNetworkPeersGemRequestBus::FindFirstHandler())
    {
        EBUS_EVENT(CloseAllNetworkPeersGemRequestBus,
            CloseAllNetworkPeersGem);
    }
    else
    {
        ShutdownApplication();
    }
}
