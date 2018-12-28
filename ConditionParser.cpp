//
// Created by bentzirozen on 12/22/18.
//

#include "ConditionParser.h"
#include "Lexer.h"

#include "ConditionParser.h"
#include "Parser.h"
/**
 * @param line the words
 */
void ConditionParser::execute(const vector<string> &cur_lex) {
    this->cur_lex = cur_lex;
    if(index>5){
        index++;
    }else{
        index--;
    }
}

ConditionParser::ConditionParser(int &index):index(index) {
}

/**
 * @param charOperator the string.
 * @return 1 if the string is operator, 0 otherwise.
 */
bool ConditionParser::isOperator(const string &charOperator) {
    return (charOperator == ">" || charOperator == ">=" || charOperator == "==" || charOperator == "!=" ||
            charOperator == "<" || charOperator == "<=");
}

bool ConditionParser::checkCondition(const vector<string>&cur_lex) {
    return stoi(cur_lex[index])>= 50;
}

