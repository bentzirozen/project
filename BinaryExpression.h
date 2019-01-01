//
// Created by sapirlinux on 12/25/18.
//

#ifndef UNTITLED8_BINARYEXPRESSION_H
#define UNTITLED8_BINARYEXPRESSION_H


#include "Number.h"

using namespace std;

class BinaryExpression: public Expression {
protected:
    Expression* right;
    Expression* left;
public:
    BinaryExpression(Expression *left, Expression *right);
    virtual ~BinaryExpression(){};

};




#endif //UNTITLED8_BINARYEXPRESSION_H
