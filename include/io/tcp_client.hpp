#include <sys/socket.h>
#include <unistd.h> 
#include <netdb.h>
#include <cstring>
#include <string>
#include <functional>
#include <thread>

class tcp_client
{
public:

tcp_client(std::function<bool(const char*, std::size_t)> __notify) :
_M_notify(__notify)
{}

~tcp_client()
{
	_M_running = false;
	close(_M_socket);
	if(_M_th_read->joinable())
		_M_th_read->join();
}

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
	_M_running = true;
	_M_th_read = std::make_shared<std::thread>(
		[&] (){

			char buffer[2048];
			while(_M_running)
			{
				auto ret = read(buffer, 2048);
				if(ret == 0x00 || !_M_running)
				{
					//ERROR
					continue;
				}
				_M_notify(buffer, ret);
			}
		}
	);
	return 0;
}

void disconnect()
{
	_M_running = false;
	close(_M_socket);
}

void send(const char* __buffer , std::size_t __length)
{
	auto sent = 0x00;
	while(sent < __length)
	{
		sent += write(_M_socket, __buffer + sent, __length);
	}

	if(sent != __length)
	{
		//error!
	}
}

private:
std::size_t read(char *buffer, std::size_t length)
{
	return 0;
}
int _M_socket;
std::function<void(const char*, std::size_t)> _M_notify;
std::shared_ptr<std::thread> _M_th_read;
bool _M_running = false;
};
