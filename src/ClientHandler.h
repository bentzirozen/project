//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_CLIENTHANDLER_H
#define PROJECT_CLIENTHANDLER_H
#define BUFFER_SIZE 1024

#include <istream>
#include <ostream>
#include <stdlib.h>
#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
using namespace std;

//interface that holds and deals all different clients

class ClientHandler{
public:

    virtual void handleClient(int sockFd)=0;
    //virtual ClientHandler& operator<<(string& str)=0;
    //virtual ClientHandler& operator>>(string& str)=0;
};

#endif //PROJECT_CLIENTHANDLER_H
