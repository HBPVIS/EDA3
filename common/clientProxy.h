#ifndef _clientProxy_h_
#define _clientProxy_h_

#include <types.h> 

namespace boring
{

class ClientProxy
{
public:
	ClientProxy(const Connection& controlConnection, const Connection& dataConnection);
	const Connection& GetControlConnection() const;
	const Connection& GetDataConnection() const;
private:
	Connection m_ControlConnection; //holding ip and port for control events
	Connection m_DataConnection; //same as above but for bulk data
};

}

#endif // _clientProxy_h_
