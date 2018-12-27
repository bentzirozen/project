//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_CONDITIONPARSER_H
#define PROJECT_CONDITIONPARSER_H

#include "Command.h"
#include "MapDB.h"

class ConditionParser: public Command {
    int &index;
public:
    int execute(const vector<string>&cur_lex);
    bool isOperator(const string &charOperator);
    explicit ConditionParser(int &index); 
    ConditionParser();
};


#endif //PROJECT_CONDITIONPARSER_H
