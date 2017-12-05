#include "StdAfx.h"
#include <CloseAllNetworkPeersGem/ShutdownApplication.h>
#include <ISystem.h>
#include <IConsole.h>

void CloseAllNetworkPeersGem::ShutdownApplication()
{
    ISystem* system = nullptr;
    EBUS_EVENT_RESULT(system, CrySystemRequestBus, GetCrySystem);
    if (system)
    {
        system->GetIConsole()->ExecuteString("quit");
    }
}
