#pragma once
#include <AzCore/EBus/EBus.h>

namespace CloseAllNetworkPeersGem
{
    class CloseAllNetworkPeersGemRequests
        : public AZ::EBusTraits
    {
    public:
        virtual ~CloseAllNetworkPeersGemRequests() = default;

        // EBusTraits overrides
        static const AZ::EBusHandlerPolicy HandlerPolicy =
            AZ::EBusHandlerPolicy::Single;
        static const AZ::EBusAddressPolicy AddressPolicy =
            AZ::EBusAddressPolicy::Single;

        virtual void CloseAllNetworkPeersGem() = 0;
    };
    using CloseAllNetworkPeersGemRequestBus =
        AZ::EBus<CloseAllNetworkPeersGemRequests>;
} // namespace CloseAllNetworkPeersGem
