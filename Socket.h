#pragma once
#ifndef SOCKET_H
#define SOCKET_H

#include <sock>

class Socket
{
public:
	Socket() {};
	~Socket() {};

private:
	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	int socket(domain, type, ); //??????????????????????????????????????

};

#endif