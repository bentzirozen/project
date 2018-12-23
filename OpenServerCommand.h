//
// Created by bentz on 16/12/2018.
//
#include "Command.h"
#include <thread>
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <map>
#ifndef PROJECT_OPENSERVERCOMMAND_H
#define PROJECT_OPENSERVERCOMMAND_H

class OpenServerCommand:public Command{
public:
    int execute(const vector<string>&cur_lex,int index);
    void openServer(int port,int freq);

};

#endif //PROJECT_OPENSERVERCOMMAND_H
