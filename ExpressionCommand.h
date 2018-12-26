//
// Created by bentzirozen on 12/26/18.
//

#ifndef PROJECT_EXPRESSIONCOMMAND_H
#define PROJECT_EXPRESSIONCOMMAND_H

#include "Command.h"
#include "Expression.h"

class ExpressionCommand:public Expression{
protected:
    Command *command;
    vector<string> lexer;
    int index;
public:
    ExpressionCommand(Command *command, const vector<string> &words,int index);

    virtual double calculate();
};


#endif //PROJECT_EXPRESSIONCOMMAND_H
