//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_CONDITIONPARSER_H
#define PROJECT_CONDITIONPARSER_H

#include "Command.h"
#include "MapDB.h"

class ConditionParser: public Command {
    vector<string>cur_lex;
    int &index;
public:
    void execute(const vector<string>&cur_lex);
    bool checkCondition(const vector<string>&cur_lex);
    bool isOperator(const string &charOperator);
    explicit ConditionParser(int &index);
};


#endif //PROJECT_CONDITIONPARSER_H
