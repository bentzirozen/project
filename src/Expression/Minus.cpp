//
// Created by sapirlinux on 12/25/18.
//

#include "Minus.h"
using namespace std;

double Minus::calculate() {
    double result = (left->calculate()-right->calculate());
    return result;

}
Minus:: Minus(Expression* val1,Expression* val2):BinaryExpression(val1,val2){
}
