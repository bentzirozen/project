//
// Created by bentzirozen on 12/20/18.
//
#include "DefineVarCommand.h"

#include <utility>
#include <cstring>


#include "DefineVarCommand.h"
#include "MapDB.h"


int DefineVarCommand::execute(const vector<string> &cur_lex,int index) {
    index++;
    // add variables to argument.
    this->varName = cur_lex[index];
    // skip "=" operator.
    index+=2;
    if(cur_lex[index] == "bind"){
        index++;
        // add path to member.
        this->path = cur_lex[index];
    }
    this->dataBase.updatePath(this->varName,this->path);
        return 5;
}


