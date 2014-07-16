#ifndef _client_h_
#define _client_h_

<<<<<<< Updated upstream
#include <common/types.h>
=======

#include "types.h"
#include "controlEvent.h"

>>>>>>> Stashed changes

namespace boring
{

class Client
{
public:

   ~Client(){}

    virtual void start() = 0;

    virtual const ControlEvent& processMessage( ControlEvent& receivedMsg ) = 0;

    virtual void exit() = 0;

    virtual ControlEvent getRegisteEvent( ) const;

    virtual ControlEvent getRegisterEventsEvent( ) const;

    bool registered( ) const { return isRegistred_; }

    bool eventsRegistered( ) const { return eventsRegistered_; }

protected:

    bool registered_;
    bool eventsRegistered_;

};


}

#endif // client_h__
