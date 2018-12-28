//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_SHUNTINGYARD_H
#define UNTITLED8_SHUNTINGYARD_H

#include <string>
#include "SymbolTable.h"

using namespace std;


class Shuntingyard {
public:
    Shuntingyard();
    string algorithm(string exp);
    bool isOperator(char c);
    bool isDigit(char c);
    unsigned int precedence(char op);
    string extract_string(const string& str);
    ~Shuntingyard();

};


#endif //UNTITLED8_SHUNTINGYARD_H
