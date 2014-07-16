#ifndef CLIENTPROXY_23114_H
#define CLIENTPROXY_23114_H


#include "connection.h"

class ClientProxy
{
public:
	const Connection& GetControlConnection() const;

	const Connection& GetDataConnection() const;
private:
	Connection m_ControlConnection; //holding ip and port for control events
	Connection m_DataConnection; //same as above but for bulk data
};

#endif