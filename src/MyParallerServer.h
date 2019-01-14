//
// Created by bentzirozen on 1/13/19.
//

#ifndef PROJECT_MYPARALLERSERVER_H
#define PROJECT_MYPARALLERSERVER_H

#include "Server.h"
#include "vector"
using namespace std;
using namespace server_side;

class MyParallerServer:public Server{
    static ClientHandler* clientHandler;
    //stateful
    vector<thread>threads_created;
    static int sockFd;
    static bool is_open;
public:
    static void connection(int port);
    void open(int port,ClientHandler* clientHandler);
    void closeServer();
    inline static bool isOpen(){
        return is_open;
    }
};
#endif //PROJECT_MYPARALLERSERVER_H
