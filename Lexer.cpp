//
//
//

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Lexer.h"
#include <regex>

using namespace std;

vector<string> Lexer::get_lexer() {
    return this->cur_lex;
}

vector<string> Lexer::split_from_file(string fileName) {
    vector<string> words;
    string line;
    ifstream myFile;
    myFile.open(fileName);
    if(myFile.is_open()) {
        while (getline(myFile, line)) {
            // skip tabs
            while (line[0] == '\t') {
                line = line.substr(1);
            }
            //skip spaces.
            while (line[0] == ' ')
                line = line.substr(1);
            while (!line.empty()) {
                //push string to back of the vector and check if not the last string in the line.
                if (line.find(SEPARATOR) != string::npos) {
                    string tmp;
                    // make tmp string.
                    tmp = (line.substr(0, line.find(SEPARATOR)));
                    int len = tmp.length();
                    // if the string includes '='
                    if (tmp.find(ASSERTSEPAR) != string::npos) {
                        // '=' is in the middle.
                        if (tmp[0] != '=') {
                            // string before.
                            string name = tmp.substr(0, tmp.find(ASSERTSEPAR));
                            words.emplace_back(name);
                            // cut var name.
                            tmp = tmp.substr(name.length());
                            // take assert command.
                            words.emplace_back("=");
                            tmp = tmp.substr(1);
                            if (tmp != "") {
                                words.emplace_back(tmp);
                            }
                        }
                            // '=' is the first token.
                        else if (tmp[0] == '=') {
                            // enter '='.
                            words.emplace_back("=");
                            // delete '='.
                            tmp = tmp.substr(1);
                            if (len > 1)
                                words.emplace_back(tmp);

                        }
                        line = line.substr(len + 1);
                    }
                        // no assertion inside.
                    else {
                        // enter the string
                        words.emplace_back(line.substr(0, line.find(SEPARATOR)));
                        // next string in the line.
                        line = line.substr(words.back().length() + 1);
                    }
                }
                    // no spaces between var name to assertion command.
                else if (line.find(ASSERTSEPAR) != string::npos) {
                    // take var name.
                    string var = line.substr(0, line.find(ASSERTSEPAR));
                    if (var != "") {
                        words.emplace_back(var);
                    }
                    // skip name and '='
                    line = line.substr(var.length() + 1);
                    // enter '='
                    words.emplace_back("=");
                    words.emplace_back(line);
                    // delete all
                    words.emplace_back("lineEnd");
                    line = "";
                }
                    // last string in the line.
                else {
                    words.push_back(line);
                    // indicate no more strings in input line.
                    words.emplace_back("lineEnd");
                    line = "";
                }
            }
        }
    } else {
        // keep getting input until "exit"
        while (getline(cin, line) && line != "exit") {
            // skip tabs
            while (line[0] == '\t') {
                line = line.substr(1);
            }
            //skip spaces.
            while (line[0] == ' ')
                line = line.substr(1);
            while (!line.empty()) {
                //push string to back of the vector and check if not the last string in the line.
                if (line.find(SEPARATOR) != string::npos) {
                    string tmp;
                    // make tmp string.
                    tmp = (line.substr(0, line.find(SEPARATOR)));
                    int len = tmp.length();
                    // if the string includes '='
                    if (tmp.find(ASSERTSEPAR) != string::npos) {
                        // '=' is in the middle.
                        if (tmp[0] != '=') {
                            // string before.
                            string name = tmp.substr(0, tmp.find(ASSERTSEPAR));
                            words.emplace_back(name);
                            // cut var name.
                            tmp = tmp.substr(name.length());
                            // take assert command.
                            words.emplace_back("=");
                            tmp = tmp.substr(1);
                            if (tmp != "") {
                                words.emplace_back(tmp);
                            }
                        }
                            // '=' is the first token.
                        else if (tmp[0] == '=') {
                            // enter '='.
                            words.emplace_back("=");
                            // delete '='.
                            tmp = tmp.substr(1);
                            if (len > 1)
                                words.emplace_back(tmp);

                        }
                        line = line.substr(len + 1);
                    }
                        // no assertion inside.
                    else {
                        // enter the string
                        words.emplace_back(line.substr(0, line.find(SEPARATOR)));
                        // next string in the line.
                        line = line.substr(words.back().length() + 1);
                    }
                }
                    // no spaces between var name to assertion command.
                else if (line.find(ASSERTSEPAR) != string::npos) {
                    // take var name.
                    string var = line.substr(0, line.find(ASSERTSEPAR));
                    if (var != "") {
                        words.emplace_back(var);
                    }
                    // skip name and '='
                    line = line.substr(var.length() + 1);
                    // enter '='
                    words.emplace_back("=");
                    words.emplace_back(line);
                    // delete all
                    words.emplace_back("lineEnd");
                    line = "";
                }
                    // last string in the line.
                else {
                    words.push_back(line);
                    // indicate no more strings in input line.
                    words.emplace_back("lineEnd");
                    line = "";
                }
            }
        }
        // return vector of strings separated line by line with the string "lineEnd"
    }
    // erase all spaces.
    vector<string> realOne;
    for(auto & string: words){
        if((!string.empty())&&(string != "\t"))
            realOne.emplace_back(string);
    }
    return realOne;
}
/**
 * @param c the expression.
 * @return return 1 if is operator, 0 otherwise.
 */
bool Lexer::isOperator(string & c) {
    return(c == "+" || c == "-" || c == "*" || c == "=" || c == "/"  );
}

vector<string> Lexer::split_from_command_line() {
    bool keep=true;
    string tmp,line,nline="";
    char c;
    while(keep) {
        cout << "Please enter new command line"<<endl;
        cin >> ws;
        getline(cin, line);
        stringstream ss(line);
        while (ss.good()) {
            ss >> tmp;
            nline="";
            for (int i = 0; i < tmp.size(); i++) {
                c = tmp[i];
                if (c>=0&&c<=127) {
                    nline += c;
                } else {
                    continue;
                }
            }
            cur_lex.push_back(tmp);
        }
        cout<<"Command added successfully."<<endl;
        cout<<"Do you want to enter another command ? y/n"<<endl;
        cin>>c;
        if(c=='n'){
            keep = false;
        }else if(c!='y'){
            perror("invalid argument");
            exit(1);
        }
    }
}
