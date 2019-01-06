//
// Created by bentzirozen on 1/2/19.
//
#include <thread>
#include <fstream>
#include "MySerialServer.h"

//open for serial server
void MySerialServer::open(int port, ClientHandler *clientHandler) {
    clientHandler = clientHandler;
    struct sockaddr_in serv_addr;

    /* First call to socket() function */
    sockFd = socket(AF_INET, SOCK_STREAM, 0);

    while (sockFd < 0) {
        sockFd = socket(AF_INET, SOCK_STREAM, 0);
        //try...
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
    this->is_open = true;


}
void MySerialServer::start() {
    thread t(&MySerialServer::connection,this);
    while (!MySerialServer::isOpen()){
        //wait..
    }
    //thread in backround while all other things occur
    t.detach();
}

void MySerialServer::closeServer() {
    is_open = false;
    close(sockFd);
}

void MySerialServer::connection() {
    int  newsockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    int timeout = 15;
    fd_set fd;
    timeval tv;
    /* Now start listening for the clients, here process will
      * go in sleep mode and will wait for the incoming connection
   */
    //serial server , one by one
    listen(sockFd, 1);
    clilen = sizeof(cli_addr);
    //timeout
    FD_ZERO(&fd);
    FD_SET(sockFd, &fd);
    tv.tv_sec = timeout;
    tv.tv_usec = 0;
    while (is_open && select(0, &fd, nullptr, nullptr, &tv)) {
        /* Accept actual connection from the client */
        newsockfd = accept(sockFd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);
        sockFd = newsockfd;
        if (newsockfd < 0) {
            perror("ERROR on accept");
            exit(1);
        }
        clientHandler->handleClient(sockFd);
    }


}


