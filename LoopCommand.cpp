//
// Created by bentzirozen on 12/22/18.
//



#include "LoopCommand.h"

int LoopCommand::execute(const vector<string> &lexer) {
    return 2;
}

LoopCommand::LoopCommand(int &index) : index(index),conditionParser(this->index) {

}
