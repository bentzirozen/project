//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_CONNECTCOMMAND_H
#define PROJECT_CONNECTCOMMAND_H

#include "Command.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include "thread"
#include "DataReaderServer.h"
#include "DataWriterClient.h"

class ConnectCommand:public Command{
    int &index;
public:
    int execute(const vector<string>&cur_lex);
    ConnectCommand(int &index);
};



#endif //PROJECT_CONNECTCOMMAND_H
