#include "clientProxy.h"

const Connection& ClientProxy::GetDataConnection() const
{
	return m_DataConnection;
}

const Connection& ClientProxy::GetControlConnection() const
{
	return m_ControlConnection;
}

