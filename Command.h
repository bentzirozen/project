#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <thread>
using namespace std;

using namespace std;
class Command {
public:
    virtual int execute(const vector<string>&lexer)=0;
    ~Command(){};
};
vector<string> lexer(string lexer);
list<string> lexer();





#endif //PROJECT_COMMAND_H
