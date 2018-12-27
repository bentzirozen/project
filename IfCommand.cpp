//
// Created by bentzirozen on 12/22/18.
//
#include "IfCommand.h"
int IfCommand::execute(const vector<string> &lexer, int index){
    int ret=0;
    ConditionParser conditionParser;
    if (!conditionParser.execute(lexer,index)) {
        while(lexer[index] != "}") {
            ret++;
            index++;
        }
    }
    return ret;
}

IfCommand::IfCommand(int &index):index(index),conditionParser(this->index){}
