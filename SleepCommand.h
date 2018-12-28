//
// Created by bentzirozen on 12/26/18.
//

#ifndef PROJECT_SLEEPCOMMAND_H
#define PROJECT_SLEEPCOMMAND_H

#include "Command.h"

class SleepCommand:public Command{
    int &index;
public:
    void execute(const vector<string>&cur_lex);
    SleepCommand(int &index);
};

#endif //PROJECT_SLEEPCOMMAND_H
