//
// Created by bentzirozen on 12/20/18.
//
#include "DefineVarCommand.h"

#include <utility>
#include <cstring>
#include "MapDB.h"

//mutex globalMutex;
int DefineVarCommand::execute(const vector<string> &cur_lex) {
    if (expression != nullptr) {
        if (db->getValuesTable().find(name) != db->getValuesTable().end()) {
            db->getValuesTable().find(name)->second = expression->calculate();
        } else {
            db->getValuesTable().insert(make_pair(name, expression->calculate()));
        }
        if (db->getBindTable().find(name) != db->getBindTable().end()) {
            db->getBindTable().erase(name);
        }
    } else if (db->getBindValuesTable().find(bindPath) != db->getBindValuesTable().end()) {
        if (db->getBindTable().find(name) != db->getBindTable().end()) {
            db->getBindTable().find(name)->second = bindPath;
        } else {
            db->getBindTable().insert(make_pair(name, bindPath));
        }
        if (db->getValuesTable().find(name) != db->getValuesTable().end()) {
            db->getValuesTable().erase(name);
        }
    }
    return 5;
}


DefineVarCommand::DefineVarCommand(int &index):index(index) {
}
