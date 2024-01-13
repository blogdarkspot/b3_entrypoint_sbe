#include <sys/socket.h>
#include <unistd.h> 
#include <netdb.h>
#include <cstring>
#include <string>


class tcp_client
{
public:

tcp_client()
{}

private:

int connect_to(const std::string& host, const std::string& port)
{
	struct addrinfo hints;
	struct addrinfo *result, *rp;
	
	memset(&hints, 0, sizeof(struct addrinfo));
	
	hints.ai_canonname = NULL;
	hints.ai_addr = NULL;
	hints.ai_next = NULL;
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_NUMERICSERV;

	//obtain a list of possible valid addresses
	if(getaddrinfo(host.c_str(), port.c_str(), &hints, &result) != 0)
	{
		return -1;
	}

	//walk through returned list until we find an address structure
	// that can be used to successfully connect socket

	for(rp = result; rp != NULL; rp = rp->ai_next)
	{	
		_M_socket = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
		if(_M_socket == -1)
		{
			continue;
		}
		if(connect(_M_socket, rp->ai_addr, rp->ai_addrlen) != -1)
		{
			break; //success
		}
		//connection has been failed, so close the socket
		close(_M_socket);
	}	

	if(rp == NULL)
	{
		return -2;
	}
	freeaddrinfo(result);
	return 0;
}

void send(const char*buffer , std::size_t length)
{
}

std::size_t read(char *buffer, std::size_t length)
{
	return 0;
}

int _M_socket;
};
