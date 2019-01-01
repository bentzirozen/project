//
// Created by sapirlinux on 12/25/18.
//

#include "Div.h"
using namespace std;

double Div::calculate() {
    double result = left->calculate() / right->calculate();
    return result;
}

Div:: Div(Expression* val1,Expression* val2){
    this->left = val1;
    this->right = val2;

}

Div::~Div() {
    delete this->left;
    delete this->right;
}
