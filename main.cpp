#include <iostream>
#include <liburing.h>
#include <cstring>
#include <unistd.h>
#include <iostream>
#include <liburing.h>
#include <cstring>
#include <cstdlib>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>


class IoUringTcpClient {
public:
    IoUringTcpClient(const char* serverIp, int port) : SERVER_IP(serverIp), PORT(port) {
        if (io_uring_queue_init(QUEUE_DEPTH, &ring, 0) < 0) {
            std::cerr << "Erro ao inicializar o anel (ring)." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        clientSocket = socket(AF_INET, SOCK_STREAM, 0);
        if (clientSocket == -1) {
            std::cerr << "Erro ao criar o socket." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        memset(&serverAddress, 0, sizeof(serverAddress));
        serverAddress.sin_family = AF_INET;
        serverAddress.sin_port = htons(PORT);
        inet_pton(AF_INET, SERVER_IP, &serverAddress.sin_addr);

        if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
            std::cerr << "Erro ao tentar se conectar ao servidor." << std::endl;
            std::exit(EXIT_FAILURE);
        }
    }

    ~IoUringTcpClient() {
        close(clientSocket);
        io_uring_queue_exit(&ring);
    }

    void sendMessage(const char* message) {
        io_uring_sqe* sqe = io_uring_get_sqe(&ring);
        io_uring_prep_send(sqe, clientSocket, message, strlen(message), 0);
        io_uring_submit(&ring);

        io_uring_wait_cqe(&ring, nullptr);
	io_uring_cqe_seen(io_uring_get_cqe(&ring));

        std::cout << "Mensagem enviada para o servidor: " << message << std::endl;
    }

    void receiveMessage(char* buffer, int bufferSize) {
        io_uring_sqe* sqe = io_uring_get_sqe(&ring);
        io_uring_prep_recv(sqe, clientSocket, buffer, bufferSize, 0);
        io_uring_submit(&ring);

        io_uring_wait_cqe(&ring, nullptr);
        io_uring_cqe_seen(&ring, io_uring_cqe_get_data(io_uring_get_cqe(&ring)));

        std::cout << "Resposta do servidor: " << buffer << std::endl;
    }

private:
    const char* SERVER_IP;
    const int PORT;
    const int QUEUE_DEPTH = 1;

    io_uring ring;
    int clientSocket;
    sockaddr_in serverAddress;
};

int main() {
    IoUringTcpClient client("127.0.0.1", 8080);

    const char* message = "Hello, server!";
    client.sendMessage(message);

    char buffer[1024] = {0};
    client.receiveMessage(buffer, sizeof(buffer));

    return 0;
}
