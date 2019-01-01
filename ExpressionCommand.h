//
// Created by bentzirozen on 12/26/18.
//

#ifndef PROJECT_EXPRESSIONCOMMAND_H
#define PROJECT_EXPRESSIONCOMMAND_H

#include "Command.h"
#include "Expression.h"
//take all the commands and make them expression command

class ExpressionCommand:public Expression{
protected:
    Command *command;
    vector<string> lexer;
    int index;
public:
    ExpressionCommand(Command *command, const vector<string> &cur_lex);
   ~ExpressionCommand();
    virtual double calculate();
};


#endif //PROJECT_EXPRESSIONCOMMAND_H
