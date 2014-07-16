#ifndef _application_h_
#define _application_h_

#include "types.h"

namespace boring
{

class Application
{
public:
    Application( Client& processor,
                 MessageTransmitter& messageTransmitter )
        : processor_( processor ),
          messageProcessor_( messageProcessor ),
          exitRequested_( false )
    {
    }

    ~Application()
    {
        thread_.join();
    }

    void start()
    {
        eventTransmitter_.start();
        client_.start();
        thread_ = boost::thread( &loop_, this );
        thread_.start_thread();
    }

    void exit()
    {
        exitRequested_ = true;
        eventTransmitter_.exit();
        client_.exit();
    }

private:

    void loop_( )
    {
        while( !exitRequested )
        {
            const ControlEvent& receivedMsg = eventTransmitter_.receiveControlEvent();
            const ControlEvent& msg = client_.processControlEvent( receivedMsg );
            eventTransmitter_.sendControlEvent( msg );
        }
    }

    Client& client_;
    EventTransmitter& eventTransmitter_;
    boost::thread thread_;
    bool exitRequested_;
};


}

#endif // _application_h_
