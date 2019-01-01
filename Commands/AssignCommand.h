//
// Created by bentzirozen on 12/27/18.
//

#ifndef PROJECT_ASSIGNCOMMAND_H
#define PROJECT_ASSIGNCOMMAND_H

#include "Command.h"
#include "../Expression/Shuntingyard.h"
#include "../Tables/BindTable.h"
#include "../Server and Client/DataWriterClient.h"

class AssignCommand : public Command {
    int &index;
public:
    explicit AssignCommand(int &index);
    void execute(const vector<string> &line);
    ~AssignCommand(){}
};

#endif //PROJECT_ASSIGNCOMMAND_H
