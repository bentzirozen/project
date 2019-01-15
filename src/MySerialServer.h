//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_MYSERIALSERVER_H
#define PROJECT_MYSERIALSERVER_H

#include "Server.h"
using namespace server_side;

class MySerialServer:public Server{
    static ClientHandler* clientHandler;
    thread myThread;
    //stateful
    static int sockFd;
    static bool is_open;
public:
    static void connection(int port,int s);
    void open(int port,ClientHandler* clientHandler);
    void closeServer(int sockFd);
    inline static bool isOpen(){
        return is_open;
    }
};


#endif //PROJECT_MYSERIALSERVER_H
