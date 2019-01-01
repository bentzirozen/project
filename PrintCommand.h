//
// Created by bentzirozen on 12/26/18.
//

#ifndef PROJECT_PRINTCOMMAND_H
#define PROJECT_PRINTCOMMAND_H

#include "Command.h"

class PrintCommand:public Command{
    int &index;
    string str;
public:
    void execute(const vector<string>&cur_lex);

    explicit PrintCommand(int &index);
};

#endif //PROJECT_PRINTCOMMAND_H
