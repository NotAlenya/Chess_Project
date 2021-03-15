#include <iostream>
#include <string>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

void main() {

	std::string ipAdress = "127.0.0.1";
	int port = 54000;

	WSADATA Data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &Data);
	if (wsResult != 0) {
		std::cerr << "Can't start winsock, Err#" << wsResult << std::endl;
		return;
	}

	// Create socket 
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET) {
		std::cerr << "Can't create socket, Err#" << WSAGetLastError() << std::endl;
		WSACleanup();
		return;
	}

	// hint structure 
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAdress.c_str(), &hint.sin_addr);

	// Connect to server 
	int conResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
	if (conResult == SOCKET_ERROR) {
		std::cerr << "Can't connect to server, Err# " << WSAGetLastError() << std::endl;
		closesocket(sock);
		WSACleanup();
		return;
	}

	// Do-while loop to send and receive data
	char buf[4096];
	std::string userInput;

	do {
		// Prompt the user for text
		std::cout << "> ";
		std::getline(std::cin, userInput);

		if (userInput.size() > 0) {
			
			// Send the text 
			int sendResult = send(sock, userInput.c_str(), userInput.size() + 1, 0);	
			if (sendResult != SOCKET_ERROR) {

				//Wait for response
				ZeroMemory(buf, 4096);
				int bytesRecv = recv(sock, buf, 4096, 0);
				if (bytesRecv > 0) {
					// Echo to console
					std::cout << "SERVER> " << std::string(buf, 0, bytesRecv) << std::endl;
				}
			}

		}

	} while (userInput.size() > 0);

	// Close the socket once finish
	closesocket(sock);
	WSACleanup();
}
