#ifndef CONNECTION_23213_H
#define CONNECTION_23213_H

#include <string>

class Connection
{
public:
	const std::string& GetIP() const;

	const short GetPort() const;

private:
	std::string m_IP;
	short m_Port;
};

#endif