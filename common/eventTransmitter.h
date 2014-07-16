#ifndef _eventTransmitter_h_
#define _eventTransmitter_h_

namespace boring
{

class EventTransmitter
{
public:

    virtual ~EventTransmitter() {}

    virtual void start() = 0;
    virtual bool sendControlEvent( const ControlEvent& controlEvent ) = 0;
    virtual const ControlEvent& getControlEvent( ) = 0;
    virtual void exit() = 0;
};

}

#endif // _eventTransmitter_h_
