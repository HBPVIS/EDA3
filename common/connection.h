#ifndef CONNECTION_23213_H
#define CONNECTION_23213_H

#include <string>

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

#endif