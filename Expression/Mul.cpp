//
// Created by sapirlinux on 12/25/18.
//

#include "Mul.h"
using namespace std;

double Mul::calculate() {
    double result = left->calculate()*right->calculate();
    return result;

}
Mul:: Mul(Expression* val1,Expression* val2):BinaryExpression(val1,val2){
}