//
// Created by bentzirozen on 12/22/18.
//
#include "IfCommand.h"
int IfCommand::execute(const vector<string> &lexer, int index){
    ConditionParser conditionParser;
    if (!conditionParser.execute(lexer,index)) {
        while(lexer[index] != "}")
            index++;
    }
}

