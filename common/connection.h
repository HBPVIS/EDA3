#ifndef _connection_h_
#define _connection_h_

#include <types.h>

#include <string>

namespace boring
{

class Connection
{
public:
	Connection(const std::string& ip, const short port);

	const std::string& GetIP() const;
	const short GetPort() const;
	const std::string GetAsUniqueString() const;
private:
	std::string m_IP;
	short m_Port;
};

}

#endif // _connection_h_
