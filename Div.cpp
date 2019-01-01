//
// Created by sapirlinux on 12/25/18.
//

#include "Div.h"
using namespace std;

double Div::calculate() {
    double result = left->calculate() / right->calculate();
    return result;
}

Div:: Div(Expression* val1,Expression* val2):BinaryExpression(val1,val2){
}
