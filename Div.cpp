//
// Created by sapirlinux on 12/25/18.
//

#include "Div.h"
using namespace std;

double Div::calculate() {
    double result = left->calculate() / right->calculate();
    return result;
}
Div:: Div(Number val1,Number val2){
    this->left = new Number(val1);
    this->right = new Number(val2);

}
Div:: Div(Expression* val1,Number val2){
    this->left = val1;
    this->right = new Number(val2);

}
Div:: Div(Number val1, Expression* val2){
    this->left = new Number(val1);
    this->right = val2;

}
Div:: Div(Expression* val1,Expression* val2){
    this->left = val1;
    this->right = val2;

}