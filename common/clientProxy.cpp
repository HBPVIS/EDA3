#include "clientProxy.h"

namespace boring
{

const Connection& ClientProxy::GetDataConnection() const
{
	return m_DataConnection;
}

const Connection& ClientProxy::GetControlConnection() const
{
	return m_ControlConnection;
}

ClientProxy::ClientProxy(const Connection& controlConnection, const Connection& dataConnection)
	: m_ControlConnection(controlConnection)
	, m_DataConnection(dataConnection)
{
	;
}

}
