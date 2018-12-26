//
// Created by bentzirozen on 12/26/18.
//

#ifndef PROJECT_PRINTCOMMAND_H
#define PROJECT_PRINTCOMMAND_H

#include "Command.h"

class PrintCommand:public Command{
    string str;
public:
    int execute(const vector<string>&cur_lex,int index);
};

#endif //PROJECT_PRINTCOMMAND_H
