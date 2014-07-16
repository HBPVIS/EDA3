#ifndef _application_h_
#define _application_h_

#include "types.h"
#include <boost/thread/thread.hpp>

namespace boring
{

class Application
{
public:
    Application( Client& processor,
                 MessageTransmitter& messageTransmitter );

    ~Application();

    void start();

    void exit();

private:

    void loop_( );

    Client& client_;
    EventTransmitter& eventTransmitter_;
    boost::thread thread_;
    bool exitRequested_;
};


}

#endif // _application_h_
