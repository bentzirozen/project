//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_DIV_H
#define UNTITLED8_DIV_H


#include "BinaryExpression.h"
#include "Plus.h"

using namespace std;

class Div: public BinaryExpression {
public:
    Div(Expression* val1,Expression* val2);
    double calculate();
    ~Div();

};


#endif //UNTITLED8_DIV_H
