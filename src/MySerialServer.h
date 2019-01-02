//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_MYSERIALSERVER_H
#define PROJECT_MYSERIALSERVER_H

#include "Server.h"
using namespace server_side;

class MySerialServer:public Server{
public:

    void open(int port,ClientHandler* clientHandler);
    void close();
};


#endif //PROJECT_MYSERIALSERVER_H
