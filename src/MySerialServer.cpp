//
// Created by bentzirozen on 1/2/19.
//
#include <thread>
#include "MySerialServer.h"

//open for serial server
void MySerialServer::open(int port, ClientHandler *clientHandler) {
    this->clientHandler = clientHandler;
    int  newsockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    int n;

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
    int sockfd, newsockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    int n;
    /* Now start listening for the clients, here process will
      * go in sleep mode and will wait for the incoming connection
   */
    //serial server , one by one
    listen(sockFd, 1);
    clilen = sizeof(cli_addr);

    /* Accept actual connection from the client */
    newsockfd = accept(sockFd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);
    sockFd = newsockfd;
    if (newsockfd < 0) {
        perror("ERROR on accept");
        exit(1);
    }
    char buffer[BUFFER_SIZE];
    std::string values;
    std::string leftovers;
    bzero(buffer, BUFFER_SIZE);
    /*
     *TODO: need to add timeout !!!!!!!!1
     */
    while (true) {
        // to know where to put data:
        int start = leftovers.length() ? leftovers.length() - 1 : 0;
        while (read(newsockfd, buffer + start, BUFFER_SIZE - start) < 0) {
            perror("ERROR writing to socket");
            exit(1);
        }


    }
}

