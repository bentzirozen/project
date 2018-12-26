//
// Created by bentzirozen on 12/20/18.
//

#include "MapDB.h"

// update or add command into map
void MapDB::addCommand(string varName, Command *command){
    this->commandTable[varName] = command;
}

Command* MapDB::getCommand(const string &CommandName) {
    if(this->commandTable.count(CommandName) ==  1)
        return this->commandTable[CommandName];
    else
        return nullptr;
}




