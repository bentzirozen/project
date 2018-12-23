#include "Command.h"
#include <sstream>
#include <fstream>
#include <vector>

vector<string> lexer(std::string lexer){
    vector<string>myList;
    istringstream ss(lexer);
    string tmp;
    while(ss.good()) {
        ss >> tmp;
        myList.push_back(tmp);
    }
    return myList;

}
