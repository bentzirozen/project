//
// Created by bentzirozen on 12/26/18.
//

#include "SleepCommand.h"
#include "ExtractExpressions.h"


int SleepCommand::execute(const vector<string> &cur_lex, int index) {
    this_thread::sleep_for(std::chrono::milliseconds(
            (int)ExtractExpressions::shuntingYardAlg(ExtractExpressions::varsExtrication(cur_lex[index]))));
    return 2;
}
