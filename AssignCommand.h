//
// Created by bentzirozen on 12/27/18.
//

#ifndef PROJECT_ASSIGNCOMMAND_H
#define PROJECT_ASSIGNCOMMAND_H

#include "Command.h"
#include "Shuntingyard.h"
#include "BindingTable.h"
#include "DataWriterClient.h"

class AssignCommand : public Command {
    int &index;
public:
    AssignCommand(int &index);

    void execute(const vector<string> &line);
};

#endif //PROJECT_ASSIGNCOMMAND_H