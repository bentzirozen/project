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
int ConditionParser::execute(const vector<string> &line,int index) {
    if(index>5){
        return 1;
    }else{
        return 0;
    }
}
/**
 * @param charOperator the string.
 * @return 1 if the string is operator, 0 otherwise.
 */
bool ConditionParser::checkOperator(const string &charOperator) {
    return (charOperator == ">" || charOperator == ">=" || charOperator == "==" || charOperator == "!=" ||
            charOperator == "<" || charOperator == "<=");
}