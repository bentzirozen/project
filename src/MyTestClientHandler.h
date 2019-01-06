//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_MYTESTCLIENTHANDLER_H
#define PROJECT_MYTESTCLIENTHANDLER_H

#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"
template <class Problem,class Solution>
class MyTestClientHandler: public ClientHandler{
    Solver<Problem,Solution>* solver;
    CacheManager<Problem,Solution>* cacheManager;
public:
    MyTestClientHandler(){};
    void handleClient(int sockFd);
    void writeTheSolution(int id, const char* buffer);
};

#endif //PROJECT_MYTESTCLIENTHANDLER_H
