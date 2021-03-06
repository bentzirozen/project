//
// Created by bentzirozen on 12/26/18.
//

#include "SleepCommand.h"
#include "../Expression/Shuntingyard.h"

//just sleeps....
void SleepCommand::execute(const vector<string> &cur_lex) {
    Shuntingyard shuntingyard;
    ++index;
    this_thread::sleep_for(std::chrono::milliseconds(
            (int)shuntingyard.algorithm(shuntingyard.extract_string(cur_lex[index]))));
    ++index;
}

SleepCommand::SleepCommand(int &index):index(index) {

}
