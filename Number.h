//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_NUMBER_H
#define UNTITLED8_NUMBER_H


#include "Expression.h"
using namespace std;

class Number : public Expression {
private:
    double value;
public:
    Number(double val);
    double calculate();
    virtual ~Number(){}
};


#endif //UNTITLED8_NUMBER_H
