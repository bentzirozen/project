//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_SERVER_H
#define PROJECT_SERVER_H
#define BUFFER_SIZE 1024
#include "ClientHandler.h"
#include <iostream>
using namespace std;
//creating new namespace
namespace server_side{
    //Client struct
    struct client_params{
        ClientHandler *clientHandler;
        int newSockFd;

    };

    //server interface
    class Server{
    public:
        virtual void open(int port,ClientHandler* clientHandler)=0;
        virtual void closeServer()=0;
        ~Server(){};
    };
}




#endif //PROJECT_SERVER_H
