#include "application.h"
#include "client.h"
#include "eventTransmitter.h"

namespace boring
{

Application::Application( Client& client,
             EventTransmitter& eventTransmitter )
     :  client_( client ),
        eventTransmitter_( eventTransmitter ),
        exitRequested_( false )
{
}

Application::~Application()
{
    thread_.join();
}

void Application::start()
{
    eventTransmitter_.start();
    client_.start();
    thread_ = boost::thread( &loop_, this );
    thread_.start_thread();
}

void Application::exit()
{
    exitRequested_ = true;
    eventTransmitter_.exit();
    client_.exit();
}

void Application::loop_( )
{



    while( !exitRequested )
    {
        if( !client_.registered() )
        {
            const ControlEvent& msg = client_.getRegisterMessage( );
            eventTransmitter_.sendControlEvent( msg );
            const ControlEvent& receivedMsg = eventTransmitter_.receiveControlEvent();
            client_.processControlEvent( receivedMsg );
            return;
        }
        else if( !client_.eventsRegistered() )
        {
            const ControlEvent& msg = client_.getEventsRegisterMessage( );
            eventTransmitter_.sendControlEvent( msg );
            const ControlEvent& receivedMsg = eventTransmitter_.receiveControlEvent();
            client_.processControlEvent( receivedMsg );
            return;
        }

        const ControlEvent& receivedMsg = eventTransmitter_.receiveControlEvent();
        const ControlEvent& msg = client_.processControlEvent( receivedMsg );
        eventTransmitter_.sendControlEvent( msg );
    }
}
}
