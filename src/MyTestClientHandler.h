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
    void handleClient(int sockFd);
    ClientHandler& operator<<(string& str);
    ClientHandler& operator>>(string& str);
};

#endif //PROJECT_MYTESTCLIENTHANDLER_H
