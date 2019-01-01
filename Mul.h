//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_MUL_H
#define UNTITLED8_MUL_H


#include "BinaryExpression.h"
#include "Number.h"

using namespace std;

class Mul: public BinaryExpression{
public:
    Mul(Expression* val1,Expression* val2);
    double calculate();
    virtual ~Mul();
};


#endif //UNTITLED8_MUL_H
