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
    string nline="",tmp,line;
    char c;
    ifstream myFile;
    myFile.open(fileName);
    if(myFile.is_open()) {
        while (getline(myFile, line)) {
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
                cur_lex.push_back(nline);
            }
        }
    }
    return cur_lex;
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

Lexer::Lexer(const string &toCut) : toCut(toCut) {}

vector<string> Lexer::splitIt(string str, string token) {
    vector<string> result;
    while (str.size()) {
        int index = str.find(token);
        if (index != string::npos) {
            result.push_back(str.substr(0, index));
            str = str.substr(index + token.size());
            if (str.size() == 0)result.push_back(str);
        } else {
            result.push_back(str);
            str = "";
        }
    }
    return result;
}
