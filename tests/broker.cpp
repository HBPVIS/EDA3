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
                    proxyList_.

                case boring::REGISTER_EVENTS:
            eventClientMap_
           }
       }

       void exit()
       {
       }


    ClientProxList proxyList_;
    std::map< uint32_t eventId, ClientProxList > eventClientMap_;
};

int main()
{
	return 0;
}
