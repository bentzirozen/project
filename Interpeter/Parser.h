//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H

#include <vector>
#include <string>
#include <map>
#include "../Commands/Command.h"
#include "../Commands/OpenServerCommand.h"
#include "../Commands/ConnectCommand.h"
#include "../Commands/DefineVarCommand.h"
#include "../Commands/IfCommand.h"
#include "../Commands/LoopCommand.h"
#include "../Commands/PrintCommand.h"
#include "../Commands/SleepCommand.h"
#include "../Commands/AssignCommand.h"


class Parser{
    map<string, Expression *> commandsTable;
    int &index;
public:
    Parser(const vector<string>&cur_lex,int& index);
    void run(const vector<string> &cur_lex);
    ~Parser();

};

#endif //PROJECT_PARSER_H
