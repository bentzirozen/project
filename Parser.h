//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H

#include <vector>
#include <string>
#include <map>
#include "Command.h"
#include "OpenServerCommand.h"
#include "ConnectCommand.h"
#include "DefineVarCommand.h"
#include "MapDB.h"
#include "IfCommand.h"
#include "LoopCommand.h"
using namespace std;

class Parser{
    MapDB &db;
    vector<string> parser;
public:
    Parser(const vector<string>&parser,MapDB& db);
    vector<string>get_parser();
    MapDB getDB();
};

#endif //PROJECT_PARSER_H
