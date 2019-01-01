//
// Created by sapirlinux on 12/25/18.
//

#include "Plus.h"
using namespace std;

double Plus::calculate() {
    double result = left->calculate()+right->calculate();
    return result;
}
Plus:: Plus(Expression* val1,Expression* val2){
    this->right = val2;
    this->left = val1;

}

Plus::~Plus() {
    delete this->right;
    delete this->left;
}
