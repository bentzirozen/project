//
// Created by bentzirozen on 12/18/18.
//


#ifndef PROJECT_OPENSERVERCOMMAND_H
#define PROJECT_OPENSERVERCOMMAND_H

#include <string>
#include "Command.h"
#include "map"
#include "../Server_and_Client/DataReaderServer.h"
/**
 * A class which opens a thread which opens a server that listens to a specific given port
 */
class OpenServerCommand : public Command {
    int &index;

public:
    void execute(const vector<string> &cur_lex);
    explicit OpenServerCommand(int &index);
};


#endif //PROJECT_OPENSERVERCOMMAND_H