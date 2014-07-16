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

};


}

#endif // client_h__
