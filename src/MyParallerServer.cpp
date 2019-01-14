//
// Created by bentzirozen on 1/13/19.
//
#include "MyParallerServer.h"
int MyParallerServer::sockFd=0;
bool MyParallerServer::is_open=false;
void MyParallerServer::open(int port, ClientHandler *clientHandler) {
    this->clientHandler = clientHandler;
    struct sockaddr_in serv_addr;
    /* First call to socket() function */
    sockFd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockFd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }
    /* Initialize socket structure */
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);

    /* Now bind the host address using bind() call.*/
    if (bind(sockFd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    struct sockaddr_in cli_addr;
    int clilen, cliSock;
    listen(sockFd, 1);
    clilen = sizeof(cli_addr);
    timeval timeout;
    timeout.tv_sec = 10;
    setsockopt(sockFd, SOL_SOCKET, SO_RCVTIMEO, (char *) &timeout, sizeof(timeout));

    while (true) {

        // Accept actual connection from the client
        cliSock = accept(sockFd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);
        if (cliSock < 0) {
            if (errno == EWOULDBLOCK) {
                cout << "TimeOut!" << endl;
                //stop();
            } else {
                perror("ERROR on accept");
                exit(1);
            }
        }
        thread t(MyParallerServer::connection,port);
        this->threads_created.push_back(t);
    }

}
