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
    vector<string> cur_lex;
    vector<vector<int>> matrix;

public:
    Lexer(){};
    bool isOperator(string & c);
    vector<string>split_from_file(string fileName);
    vector<string>fromStringtoLex(vector<string> lines);
    vector<vector<int>>convert_to_matrix(vector<string>values);
    ~Lexer(){};
};

#endif //PROJECT_LEXER_H
