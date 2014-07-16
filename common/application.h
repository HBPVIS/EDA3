#ifndef _application_h_
#define _application_h_

namespace boring
{

class Application
{
public:
    Application( Processor& processor, MessageProcessor& messageProcessor )
        : processor_( processor ), messageProcessor_( messageProcessor )
    {
    }

    ~Application()
    {
        exit();
    }

    void start()
    {
        thread_ = boost::thread( &loop_, this );
        thread_.start_thread();
    }

    void exit()
    {
        exitRequested_ = true;
        messageProcessor_.exit();
        processor_.exit();
        thread_.join();
    }

private:

    void loop_( )
    {
        while( !exitRequested )
        {
            ControlMessage receivedMsg = messageProcessor_.receiveControlMessage();
            const ControlMessage& msg = processor_.processMessage( receivedMsg );
            messageProcessor_.sendControlMessage( msg );
        }
    }

    Processor& processor_;
    MessageProcessor& messageProcessor_;
    boost::thread thread_;
    bool exitRequested_;
};


}

#endif // _application_h_
