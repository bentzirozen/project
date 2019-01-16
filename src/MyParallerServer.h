//
// Created by bentzirozen on 1/13/19.
//

#ifndef PROJECT_MYPARALLERSERVER_H
#define PROJECT_MYPARALLERSERVER_H
#define WAIT_FOR_CLIENT 1
#define WAIT_FOREVER 0

define MAX_CLIENTS 5
#include "Server.h"
#include "vector"
using namespace std;
using namespace server_side;

class MyParallerServer:public Server{
    static ClientHandler* clientHandler;
    //stateful
    static int sockFd;
    static bool is_open;
    vector<pthread_t>threads_created;
public:
    ~MyParallerServer();
    static void* handle(void *args);
    void open(int port,ClientHandler* clientHandler);
    void closeServer();
    static void* connection(void *args);
    inline static bool isOpen(){
        return is_open;
    }
};
#endif //PROJECT_MYPARALLERSERVER_H
