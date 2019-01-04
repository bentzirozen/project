//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_MYSERIALSERVER_H
#define PROJECT_MYSERIALSERVER_H

#include "Server.h"
using namespace server_side;

class MySerialServer:public Server{
    ClientHandler* clientHandler;
    int sockFd;
    bool success;
public:

    void open(int port,ClientHandler* clientHandler);
    void closeServer();
};


#endif //PROJECT_MYSERIALSERVER_H
