//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_SERVER_H
#define PROJECT_SERVER_H
#define BUFFER_SIZE 1024
#include "ClientHandler.h"
#include <iostream>
#include <stdlib.h>
#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
//creating new namespace
namespace server_side{

    //server interface
    class Server{
    public:

        virtual void open(int port,ClientHandler* clientHandler)=0;
        virtual void closeServer()=0;
    };
}




#endif //PROJECT_SERVER_H
