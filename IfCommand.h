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
     void execute(const vector<string>&lexer);
    explicit IfCommand(int &index);
};


#endif //PROJECT_IFCOMMAND_H
