//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_MYTESTCLIENTHANDLER_H
#define PROJECT_MYTESTCLIENTHANDLER_H

#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"
class MyTestClientHandler: public ClientHandler{
    Solver<string,string>* solver;
    CacheManager<string,string>* cacheManager;
public:
    MyTestClientHandler(CacheManager<string, string> *pManager, Solver<string, string> *pSolver);
    void handleClient(int sockFd);
    void writeTheSolution(int id, const char* buffer);
};

#endif //PROJECT_MYTESTCLIENTHANDLER_H
