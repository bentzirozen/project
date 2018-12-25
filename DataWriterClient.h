//
// Created by bentzirozen on 12/25/18.
//

#ifndef PROJECT_DATAWRITERCLIENT_H
#define PROJECT_DATAWRITERCLIENT_H
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>

#include <string>
using namespace std;


class DataWriterClient {
     string message;
     int sockFd;
public:
    void setMessage(const string &message1);

    void createConnection(int port, string address);

     int getSocketFD();

};


#endif //PROJECT_DATAWRITERCLIENT_H
