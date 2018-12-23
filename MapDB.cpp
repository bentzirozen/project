//
// Created by bentzirozen on 12/20/18.
//

#include "MapDB.h"

// return map.
 map<string, double> &MapDB::getVarTable() {
    return symbolTable;
}

// update or add var into map
void MapDB::updateVar(string varName, double value) {
    this->symbolTable[varName] = value;
}
// return value of specific var.
double MapDB::getValueFromTable(const string &varName) {
    if(this->symbolTable.count(varName) ==  1)
        return this->symbolTable[varName];
    else
        throw runtime_error("var: " + varName + "not exists");
}

// return map.
map<string, string> &MapDB::getPathTable() {
    return pathTable;
}

// update or add var into map
void MapDB::updatePath(string varName, string path) {
    this->pathTable[varName] = path;
}

// return value of specific var.
string MapDB::getPathFromTable(const string &varName) {
    if(this->pathTable.count(varName) ==  1)
        return this->pathTable[varName];
    else
        throw runtime_error("var: " + varName + "not exists");
}

map<string, Command*>& MapDB::getCommandTable() {
    return commandTable;
}

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

