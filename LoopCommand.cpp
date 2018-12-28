//
// Created by bentzirozen on 12/22/18.
//



#include "LoopCommand.h"

void LoopCommand::execute(const vector<string> &lexer) {
   index+=2;
}

LoopCommand::LoopCommand(int &index) : index(index),conditionParser(this->index) {

}
