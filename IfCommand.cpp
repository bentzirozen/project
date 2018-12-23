//
// Created by bentzirozen on 12/22/18.
//
#include "IfCommand.h"
int IfCommand::execute(const vector<string> &lexer, int index){
    // execute all the commands in the if loop just once.
    if (checkCondition()) {
        for (auto &command: this->myCommands) {
            command->execute(lexer,index);
        }
    }
    // return how many read.
    return this->endOfLoopIndex;
}

