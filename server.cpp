#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

void main() {
	
	// Init winsock
	WSADATA Data;
	WORD ver = MAKEWORD(2, 2);

	int wsOk = WSAStartup(ver, &Data);

	if (wsOk != 0) {
		std::cerr << "Can't initialize socket." << std::endl;
		WSACleanup();
		return;
	}

	// Create a socket 
	SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == INVALID_SOCKET) {
		std::cerr << "Can't create a socket" << std::endl;
		WSACleanup();
		return;
	}

	// Bind ip and a port to a socket 
	sockaddr_in hint; 
	hint.sin_family = AF_INET;
	hint.sin_port = htons(54000);
	hint.sin_addr.S_un.S_addr = INADDR_ANY;

	bind(listening, (sockaddr*)&hint, sizeof(hint));

	// Tell WS socket is for listening 
	listen(listening, SOMAXCONN);

	// Wait for a connection 
	sockaddr_in client;
	int clientsize = sizeof(client);

	SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientsize);

	char host[NI_MAXHOST];
	char service[NI_MAXHOST]; // aka port

	ZeroMemory(host, NI_MAXHOST);
	ZeroMemory(service, NI_MAXHOST);

	if (getnameinfo((sockaddr*)&client, clientsize, host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0) {
		std::cout << host << " connected on port " << service << std::endl;
	} else {
		inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
		std::cout << " connected on port " << ntohs(client.sin_port) << std::endl;
	}

	// Close listening socket
	closesocket(listening);

	// While true, accept and echo message to client 
	char buf[4096];

	while (true) {
		ZeroMemory(buf, 4096);

		int bytesRcvd = recv(clientSocket, buf, 4096, 0);
		if (bytesRcvd == SOCKET_ERROR) {
			std::cerr << "Error in recv()" << std::endl;
			break;
		} 

		if (bytesRcvd == 0) {
			std::cout << "Client disconnected" << std::endl;
			break;
		} 

		// Echo message to client 
		send(clientSocket, buf, bytesRcvd + 1, 0);

		std::cout << "CLIENT> " << std::string(buf, 0, bytesRcvd) << std::endl;

	}

	// Close the socket 
	closesocket(clientSocket);

	// Shutdown winsock 
	WSACleanup();

}
