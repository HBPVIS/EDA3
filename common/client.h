#ifndef _client_h_
#define _client_h_

#include <types.h>

namespace boring
{

class Client
{
public:

   ~Client(){}

    virtual void start() = 0;

    virtual const ControlMessage& processMessage( ControlMessage& receivedMsg ) = 0;

    virtual void exit() = 0;

    ControlEvent getRegisteEvent( ) const;

    ControlEvent getRegisterEventsEvent( uint32_t eventID ) const;

    bool registered( ) const { return isRegistred_; }

    bool eventsRegistered( ) const { return eventsRegistered_; }

protected:

    bool registered_;
    bool eventsRegistered_;

};


}

#endif // client_h__
