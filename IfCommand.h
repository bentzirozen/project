//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_IFCOMMAND_H
#define PROJECT_IFCOMMAND_H

#include "ConditionParser.h"

class IfCommand:public Command{
    int &index;
    ConditionParser conditionParser;
public:
     int execute(const vector<string>&lexer);
     IfCommand(int &index);
};


#endif //PROJECT_IFCOMMAND_H
