#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Lexer.h"
#include <regex>

using namespace std;


vector<string> Lexer::split_from_file(string fileName) {
    vector<string> vector;
    string tmp;
    fstream file;
    if (!file.is_open()) {
        file.open(fileName, fstream::in | fstream::app);
    }
    while (getline(file,tmp)) {
        vector.push_back(tmp);
    }
    file.close();
    return fromStringtoLex(vector);
}
/**
 * @param the lines in the file.
 * @return vector of words in the right order
 */
vector<string> Lexer::fromStringToExp(vector<string> lines) {
    vector<string> words;
    char oper;
    bool check;
    string s;
    // goes all the lines in the file.
    for (auto const item:lines) {
        // if there is a '=' in the line.
        if (item.find('=') != std::string::npos) {
            check = false;
            std::stringstream ss(item);
            // split the string by '='.
            while (std::getline(ss, s, '=')) {
                std::stringstream sd(s);
                // split by space.
                if (!check) {
                    while (std::getline(sd, s, ' ')) {
                        if (!s.empty() && s.at(0) == '\t') {
                            s.erase(std::remove(s.begin(), s.end(), '\t'), s.end());
                        }
                        // if the operator is <= , >=,!= add to the string
                        if (s.find("<") != std::string::npos) {
                            s += '=';
                            check = true;
                        } else if (s.find(">") != std::string::npos) {
                            s += '=';
                            check = true;
                        } else if (s.find("!") != std::string::npos) {
                            s += '=';
                            check = true;
                        }
                        words.push_back(s);
                    }

                } else {
                    string sb = s.substr(0, 5);
                    if (s.substr(0, 5) == " bind") {
                        words.push_back(s.substr(0, 5));
                        words.push_back(s.substr(6, s.length() - 1));
                    }
                        //in case of a loop, number will come before the '{'
                    else if (s.find('{') != std::string::npos) {
                        words.push_back(sb);
                        words.push_back("{");
                    } else {
                        words.push_back(s);
                    }
                }
                if (!check) {
                    check = true;
                    // if there is no '=' in the vector of words, put it.
                    words.push_back("=");
                }
            }
        }
        else {
            std::stringstream ss(item);
            string checker;
            // split the string by space.
            while (std::getline(ss, s, ' ')) {
                if(!s.empty() && s.at(0) == '\t') {
                    s.erase(std::remove(s.begin(),s.end(), '\t'), s.end());
                }
                // if checker isn't empty and s isn't empty and s is a number and the last index of checker is also a number
                if(!s.empty() && isdigit(s.at(0)) && !checker.empty()) {
                    // push the checker
                    words.push_back(checker);
                    checker = "";
                    // push the string.
                    words.push_back(s);
                }
                    // if checker isn't empty and it isn't operator , just concatenating the string to checker.
                else if(!checker.empty() && isOperator(s))
                    checker+=s;
                else
                if(checker.empty()) words.push_back(s);
            }
        }
    }
    vector<string> last_iter;
    for (auto const &item:words) {
        if(item == "") continue;
        last_iter.push_back(item);
    }
    // return the vector of string.
    return last_iter;
}
/**
 * @param c the expression.
 * @return return 1 if is operator, 0 otherwise.
 */
bool Lexer::isOperator(string & c) {
    return(c == "+" || c == "-" || c == "*" || c == "=" || c == "/"  );
}