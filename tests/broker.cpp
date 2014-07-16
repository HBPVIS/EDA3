#include <client.h>

class Broker : public boring::Client
{
public:
    void start()
       {
       }

       const boring::ControlMessage& processMessage( boring::ControlMessage& receivedMsg )
       {
           switch( receivedMsg.getEvenId() )
           {
                case boring::REGISTER_CLIENT:
                    proxyList_.addClient( clientProxy );

                case boring::REGISTER_EVENTS:
                    eventClientMap_.registerEvents( eventList, clientProxy  );
           }
       }

       void exit()
       {
           // hello lets exit
       }


    ClientProxList proxyList_;
    std::map< uint32_t eventId, ClientProxList > eventClientMap_;
};


int main()
{
    Broker broker;
    ZeroMQConnection connection;
    Application application( broker, connection );
    application.start();
    return 0;
}
