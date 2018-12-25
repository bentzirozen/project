//
// Created by bentz on 16/12/2018.
//
#include "Command.h"
#include <thread>
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <map>
#include "MapDB.h"
#ifndef PROJECT_OPENSERVERCOMMAND_H
#define PROJECT_OPENSERVERCOMMAND_H

class OpenServerCommand:public Command{
    MapDB& db;
public:
    int execute(const vector<string>&cur_lex,int index);
    OpenServerCommand():db(db){};

};

#endif //PROJECT_OPENSERVERCOMMAND_H
