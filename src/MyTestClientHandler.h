//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_MYTESTCLIENTHANDLER_H
#define PROJECT_MYTESTCLIENTHANDLER_H

#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"

class MyTestClientHandler: public ClientHandler{
    Solver* solver;
    CacheManager* cacheManager;
public:
    void handleClient(istream inputStream,ostream outputStream);
};

#endif //PROJECT_MYTESTCLIENTHANDLER_H
