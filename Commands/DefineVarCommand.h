
//
// Created by bentzirozen on 12/20/18.
//

#ifndef PROJECT_DEFINEVARCOMMAND_H
#define PROJECT_DEFINEVARCOMMAND_H


#include "Command.h"
#include "string"
#include "../Expression/Expression.h"

class DefineVarCommand : public Command {
    int &index;
    Expression* expression = nullptr;
public:
    void execute(const vector<string>&cur_lex);
    explicit DefineVarCommand(int &index);
};

#endif //PROJECT_DEFINEVARCOMMAND_H