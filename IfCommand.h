//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_IFCOMMAND_H
#define PROJECT_IFCOMMAND_H

#include "ConditionParser.h"

class IfCommand:public ConditionParser{
public:
     int execute(const vector<string>&lexer,int index);
     IfCommand(){};
};


#endif //PROJECT_IFCOMMAND_H
