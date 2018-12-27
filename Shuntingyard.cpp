//
// Created by sapirlinux on 12/25/18.
//

#include <stack>
#include <iostream>
#include "Shuntingyard.h"

using namespace std;

Shuntingyard::Shuntingyard() {

}


unsigned int Shuntingyard::precedence(char op) {
    switch(op) {
        case '-': case '+':
            return 1;
        case '*': case '/':
            return 2;
        default:
            return 0;
    }
}

bool Shuntingyard::isdigit(char c){ //checks if the char is a digit
    if((c >= 48) && (c <= 57)){
        return true;
    }else {
        return false;
    }
}

bool Shuntingyard::isoperator(char c){ //checks if the char is an operator
    if((c = '+') || (c = '-') || (c = '/') || (c = '*')) {
        return true;
    }else {
        return false;
    }
}




void Shuntingyard:: algorithm(string exp){
    string output;
    stack<string> operators;

    //while there is something to read.
    while(!exp.empty()) {
        char c = exp[0];
        exp.erase(0,1); //erase the first character.

        string token;
        token +=c;
        if(isdigit(c)) {//the character is a digit.
            output.append(token); //add the digit to the queue.
        }else if(c == '(') { //the character is a (
            operators.push(token);
        } else if(c == ')') { //the character is a )
            string lastop = operators.top();
            char lastoperator = lastop[0];
            while(lastoperator != '('){
                operators.pop();
                output.append(lastop);
                lastop = operators.top(); //go to the next operator in the stack.
                lastoperator = lastop[0];
            }
            if(lastoperator == '('){
                operators.pop();
            }

        } else if(isoperator(c)){ //the character c is an operator.
            if(operators.empty()){
                operators.push(token);
            }else {
                while (isoperator(operators.top()[0])) { //while we have an operator in the stack, check precedence.
                    if ((precedence(operators.top()[0])) >
                        (precedence(c))) { //there is an operator in the stack with precedence.
                        string op;
                        op += operators.top()[0];
                        output.append(op); //push to the queue.
                        operators.pop(); //pop the operator.
                    } else {
                        break;
                    }
                }
                operators.push(token); //push the new operator to the stack.
            }
        }



    }
    //there is nothing else in the string.
    while(!operators.empty()) {//while the stack is not empty.
        if(operators.top() == "(" || operators.top() == ")")
            throw invalid_argument("invalid_arg");
        else {
            output.append(operators.top());
            operators.pop();
        }
    }

    cout << output << endl; //the new string

}

Shuntingyard::~Shuntingyard() {

}