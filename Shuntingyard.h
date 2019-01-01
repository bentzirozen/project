//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_SHUNTINGYARD_H
#define UNTITLED8_SHUNTINGYARD_H

#include <string>
#include "SymbolTable.h"
#include "Expression.h"
#include "Number.h"
#include "Mul.h"
#include "Plus.h"
#include "Minus.h"
#include "Div.h"
#include <algorithm>
#include <stack>

using namespace std;


class Shuntingyard {
    vector<Expression*>will_delete;
public:
    Shuntingyard();
    double algorithm(string exp);
    bool isOperator(char c);
    bool isDigit(char c);
    unsigned int precedence(char op);
    string extract_string(const string& str);
    ~Shuntingyard();
    Expression *string_to_exp(vector<string> shunt_string);
};


#endif //UNTITLED8_SHUNTINGYARD_H