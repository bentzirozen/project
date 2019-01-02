//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_SERVER_H
#define PROJECT_SERVER_H

#include "ClientHandler.h"
//creating new namespace
namespace server_side{

    //server interface
    class Server{
    public:

        virtual void open(int port,ClientHandler* clientHandler)=0;
        virtual void close()=0;
    };
}




#endif //PROJECT_SERVER_H
