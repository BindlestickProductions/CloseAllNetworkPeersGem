#pragma once

#include <IConsole.h>

namespace CloseAllNetworkPeersGem
{
    class ConsoleCommandCVars
    {
    public:
        void RegisterCVars();
        void UnregisterCVars();

        static void CloseAll(IConsoleCmdArgs* args);

    private:
        const std::string m_commandName = "closeallnetworkpeers";
    };
}
