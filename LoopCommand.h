//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_LOOPCOMMAND_H
#define PROJECT_LOOPCOMMAND_H

#include "ConditionParser.h"

class LoopCommand:public ConditionParser{
public:
    LoopCommand(){};
    int execute(const vector<string>&lexer,int index);
};



#endif //PROJECT_LOOPCOMMAND_H
