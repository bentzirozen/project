#include <iostream>
#include "Plus.h"
#include "Mul.h"
#include "Div.h"
#include "Shuntingyard.h"

using namespace std;

int main() {
    Expression* e=new Plus(new Number(3) , new Mul( new Div(new Number(4), new
            Number(2)) , new Number(5)));
    e->calculate();
    std::cout << e << std::endl;
    Shuntingyard test;
    string exp = "30+(4/2)*567";
    test.algorithm(exp);
    return 0;
}