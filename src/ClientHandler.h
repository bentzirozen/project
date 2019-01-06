//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_CLIENTHANDLER_H
#define PROJECT_CLIENTHANDLER_H

#include <istream>
#include <ostream>
using namespace std;

//interface that holds and deals all different clients

class ClientHandler{
public:

    virtual void handleClient(int sockFd)=0;
    virtual ClientHandler& operator<<(string& str)=0;
    virtual ClientHandler& operator>>(string& str)=0;
};

#endif //PROJECT_CLIENTHANDLER_H
