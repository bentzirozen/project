#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <mutex>
using namespace std;

mutex globalMutex;

using namespace std;
class Command {
public:
    virtual int execute(const vector<string>&lexer,int index)=0;
    ~Command(){};
};
vector<string> lexer(string lexer);
list<string> lexer();
void parser();





#endif //PROJECT_COMMAND_H
