//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_SHUNTINGYARD_H
#define UNTITLED8_SHUNTINGYARD_H

#include <string>

using namespace std;


class Shuntingyard {
public:
    Shuntingyard();
    void algorithm(string exp);
    bool isoperator(char c);
    bool isdigit(char c);
    unsigned int precedence(char op);
    ~Shuntingyard();

};


#endif //UNTITLED8_SHUNTINGYARD_H
