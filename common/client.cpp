#include "client.h"

namespace boring
{

const uint32_t Client::getClientUUID() const
{
    return _clientProxy.GetControlConnection.;
}


ControlEvent Client::getRegisteEvent( ) const
{
    std::vector<int8_t> data; 
    return ControlEvent( getClientUUID(),
                         ControlEvents::REGISTER_CLIENT,
                         true,
                         data );
}

ControlEvent Client::getRegisterEventsEvent( uint32_t eventID ) const
{
    std::vector<int8_t> data; 
    return ControlEvent( getClient(),
                         ControlEvents::REGISTER_EVENTS,
                        true,
                        data );
}

}
