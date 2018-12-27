//
// Created by bentzirozen on 12/26/18.
//

#include "ExpressionCommand.h"

/**
 *
 * @return the command execution value.
 */
double ExpressionCommand::calculate() {
    command->execute(lexer);
    return 0;

}

/**
 * @param command the command
 * @param words the array of orders.
 */
ExpressionCommand::ExpressionCommand(Command *command, const vector<string> &cur_lex) : command(
        command), lexer(cur_lex){}

