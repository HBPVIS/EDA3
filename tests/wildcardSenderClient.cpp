#include "../common/client.h"

class WildCardSenderClient: public boring::Client
{

public:

    std::vector <std::string> wildcards;

    void start()
    {
    }

    const ControlMessage& processMessage( ControlMessage& receivedMsg )
    {
    }

    void exit()
    {
    }
};

int main()
{

  WildCardSenderClient wildCardSenderClient;

  wildCardSenderClient.wilcards.push_back(std::string("*.cpp"));
  wildCardSenderClient.wilcards.push_back(std::string("*.h"));


	return 0;
}
