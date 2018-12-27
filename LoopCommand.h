//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_LOOPCOMMAND_H
#define PROJECT_LOOPCOMMAND_H

#include "ConditionParser.h"

class LoopCommand:public Command{
    int index;
    ConditionParser conditionParser;
public:
    LoopCommand(int &index);
    int execute(const vector<string>&lexer);
};



#endif //PROJECT_LOOPCOMMAND_H
