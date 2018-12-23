//
// Created by bentzirozen on 12/17/18.
//

#ifndef PROJECT_LEXER_H
#define PROJECT_LEXER_H

#define SPACE " "

#define SPECIAL_OPERATOR {"+","-","*","/", "\"","<",">","<=",">=","=="}

#include <vector>
#include <string>
#include <fstream>
#include <iostream>



using namespace std;

class Lexer{
    vector<string> cur_lex;

public:
    vector<string>split_from_file(string fileName);
    vector<string>split_from_command_line();
    vector<string> get_lexer();
};

#endif //PROJECT_LEXER_H
