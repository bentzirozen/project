//
// Created by bentzirozen on 1/13/19.
//
#include "MyParallerServer.h"
int MyParallerServer::sockFd=0;
bool MyParallerServer::is_open=false;
ClientHandler* MyParallerServer::clientHandler= nullptr;

/**
 * The function open a thread to communuczte to a client
 */
void* MyParallerServer:: handle(void* args) {
    struct client* clientStruct=(struct client*) args;
    //Handle client
    clientStruct->clientHandler->handleClient(clientStruct->newSockFd);
    return 0;
}

/**
 * open 1 socket server and multiple for clients as needed - maximum 5
 */
void* MyParallerServer:: connection(void* args) {
    struct params* openSocket = (struct params *) args;
    timeval timeout;
    timeout.tv_sec = WAIT_FOR_CLIENT;
    timeout.tv_usec = 0;
    timeval timeForever;
    timeForever.tv_sec = WAIT_FOREVER;
    timeForever.tv_usec = 0;
    vector<thread>threads_created;
    struct client* clientStruct = new client();
    clientStruct->clientHandler=openSocket->clientHandler;
    openSocket->newSockFd = accept(openSocket->sockFd,
                                   (struct sockaddr *) &openSocket->client_addr,
                                   (socklen_t *) &openSocket->client);

    if (openSocket->newSockFd < 0) {
        perror("ERROR on accept");
        return 0;
    }

    //client thread
    clientStruct->newSockFd = openSocket->newSockFd;
    setsockopt(openSocket->newSockFd, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeForever, sizeof(timeForever));
    threads_created.emplace_back(thread(&MyParallerServer::handle,clientStruct));

    //While there are more clients
    while (true) {
        /*Accept actual connection from the client */
        //Wait for connection from the next client
        setsockopt(openSocket->sockFd, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout));
        openSocket->newSockFd = accept(openSocket->sockFd, (struct sockaddr *) &openSocket->client_addr,
                                                                                     (socklen_t *) &openSocket->client);

        //connection failed
        if (openSocket->newSockFd < 0) {
            if (errno == EWOULDBLOCK){
                printf("timeout\n");
                break;
            } else {
                perror("ERROR on accept");
                break;
            }
        }

        //Open a thread to talk to the client
        clientStruct->newSockFd = openSocket->newSockFd;
        setsockopt(openSocket->newSockFd, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeForever, sizeof(timeForever));
        threads_created.emplace_back(thread(&MyParallerServer::handle,clientStruct));
    }

    int size = threads_created.size();
    for (int i = 0; i < size; i++){
        threads_created[i].join();
    }

    delete clientStruct;
    return 0;
}

/**
 * The function open thread to open a server and listen to multiple clients simultaneously
 */
void MyParallerServer::open(int port, ClientHandler *ch) {
    int newsockfd = 0;
    int sockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    struct params* openSocket = new params();

    // open a socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    // Initialize socket structure
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);

    /* Now bind the host address using bind() call.*/
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    //Listen to the socket
    listen(sockfd, 5);
    clilen = sizeof(cli_addr);

    // Initialize server structure
    openSocket->clientHandler = ch;
    openSocket->client = clilen;
    openSocket->client_addr = cli_addr;
    openSocket->newSockFd = newsockfd;
    openSocket->sockFd = sockfd;

    thread t(&MyParallerServer::connection,openSocket);
    t.join();
    closeServer(openSocket->sockFd);
    delete openSocket;
}

void MyParallerServer::closeServer(int sockFd) {
    //close the socket
    close(sockFd);
}
