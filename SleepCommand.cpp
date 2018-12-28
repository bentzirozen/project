//
// Created by bentzirozen on 12/26/18.
//

#include "SleepCommand.h"
#include "Shuntingyard.h"


void SleepCommand::execute(const vector<string> &cur_lex) {
    Shuntingyard shuntingyard;
    this_thread::sleep_for(std::chrono::milliseconds
    (stoi(shuntingyard.algorithm(shuntingyard.extract_string(cur_lex[index])))));
    index+=2;
}

SleepCommand::SleepCommand(int &index):index(index) {

}
