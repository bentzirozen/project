//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_PLUS_H
#define UNTITLED8_PLUS_H


#include "BinaryExpression.h"
#include "Number.h"

using namespace std;

class Plus: public BinaryExpression{
public:
    Plus(Expression* val1,Expression* val2);
    double calculate();
    ~Plus();

};


#endif //UNTITLED8_PLUS_H
