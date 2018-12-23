//
// Created by bentzirozen on 12/22/18.
//



#include "LoopCommand.h"

int LoopCommand::execute(const vector<string> &lexer, int index) {
    // while condition is met execute.
    while (checkCondition()) {
        for (auto &command: this->myCommands) {
            command->execute(lexer,index);
        }
    }
    return this->endOfLoopIndex;
}

