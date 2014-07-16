#include "connection.h"

#include <sstream>

namespace boring
{

const short Connection::GetPort() const
{
	return m_Port;
}

const std::string& Connection::GetIP() const
{
	return m_IP;
}

Connection::Connection(const std::string& ip, const short port) 
	: m_IP(ip)
	, m_Port(port)
{
	;
}

const std::string Connection::GetAsUniqueString() const
{
	std::stringstream ss;
	ss << m_IP << ":" << m_Port;
	return ss.str().c_str();
}

}
