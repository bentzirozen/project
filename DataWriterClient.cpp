//
// Created by bentzirozen on 12/25/18.
//

#include "DataWriterClient.h"
#include "DataReaderServer.h"
std::string DataWriterClient::message = "";

int DataWriterClient::socketFd=0;
void DataWriterClient::setMessage(const string &message1) {
    globalMutex.lock();
    message = message1;
    globalMutex.unlock();
}

void DataWriterClient::createConnection(int port, string address) {
    int sockfd, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;

    /* Create a socket point */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    socketFd = sockfd;
    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    server = gethostbyname(address.c_str());

    if (server == NULL) {
        fprintf(stderr, "ERROR, no such host\n");
        exit(0);
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *) server->h_addr, (char *) &serv_addr.sin_addr.s_addr, server->h_length);
    serv_addr.sin_port = htons(port);

    /* Now connect to the server */
    while (connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        // keep trying...
    }

    while (true) {
        if(!message.empty()) {
            globalMutex.lock();
            /* Send message to the server */
            n = write(sockfd, message.c_str(), message.length());
            message = "";
            globalMutex.unlock();
            if (n < 0) {
                perror("ERROR writing to socket");
                exit(1);
            }
        }
    }
}


