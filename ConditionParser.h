//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_CONDITIONPARSER_H
#define PROJECT_CONDITIONPARSER_H

#include "Command.h"
#include "MapDB.h"

class ConditionParser: public Command {
public:
    int execute(const vector<string>&cur_lex,int index);
    bool checkOperator(const string &charOPerator);
};


#endif //PROJECT_CONDITIONPARSER_H
