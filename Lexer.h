//
// Created by bentzirozen on 12/17/18.
//

#ifndef PROJECT_LEXER_H
#define PROJECT_LEXER_H



#define SPECIAL_OPERATOR {"+","-","*","/", "\"","<",">","<=",">=","=="}

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#define SEPARATOR " "
#define ASSERTSEPAR "="



using namespace std;

class Lexer{
    string toCut;
    vector<string> cur_lex;

public:
    Lexer(){};
    bool isOperator(string & c);
    vector<string>split_from_file(string fileName);
    vector<string>split_from_command_line();
    vector<string>fromStringToExp(vector<string> commands);
    vector<string> get_lexer();
};

#endif //PROJECT_LEXER_H
