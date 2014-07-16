#ifndef _client_h_
#define _client_h_

namespace boring
{

class Client 
{
public:
    Client()
    {
    }

    ~Client()
    {
    }

    const ControlMessage& processMessage( ControlMessage& receivedMsg )
    {
	// do stuff
    }

    void exit()
    {
    }

};


}

#endif // client_h__
