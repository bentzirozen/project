//
// Created by bentzirozen on 12/20/18.
//

#ifndef PROJECT_DEFINEVARCOMMAND_H
#define PROJECT_DEFINEVARCOMMAND_H



#include "Command.h"
#include "MapDB.h"

class DefineVarCommand : public Command {
    MapDB dataBase;
    string varName;
    string path;

public:
    int execute(const vector<string>&cur_lex,int index);

};




#endif //PROJECT_DEFINEVARCOMMAND_H
