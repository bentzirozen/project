//
// Created by bentzirozen on 12/20/18.
//
#include "DefineVarCommand.h"

#include <utility>
#include <cstring>


#include "DefineVarCommand.h"
#include "MapDB.h"


int DefineVarCommand::execute(const vector<string> &cur_lex,int index) {
    ++index; // skip 'Var'
    string key = cur_lex[index];
    index += 2; // skip '='
    if (cur_lex[index] == " bind") {
        ++index;
        string val = cur_lex[index];
        if (val[1] == '/') { // start of a path
            globalMutex.lock();
            // set value in the table
            val = val.substr(1, val.length() - 2);
            if (this->dataBase.atTable(dataBase.getPathTable(), val)) {
                // if the path is in paths table
                this->dataBase.updateBind(key, val);
                this->dataBase.updateVar(key, this->dataBase.getValueFromTable(val));
            } else {
                this->dataBase.updateBind(key, val);
                this->dataBase.updateVar(key, 0);
            }
            globalMutex.unlock();
        } else {
            globalMutex.lock();
            this->dataBase.updateBind(key, val);
            this->dataBase.updateVar(key, this->dataBase.getValueFromTable(val));
            this->dataBase.updateBind(val, key);
            globalMutex.unlock();
        }

    }
}
    /*
    else {
        string val = cur_lex[index];
        globalMutex.lock();
        // calculate  and update
        SymbolTable::instance()->setValue(key,
                                          ExpressionsParser::shuntingYardAlg(ExpressionsParser::varsExtrication(val)));
        globalMutex.unlock();
    }
    ++index;
}


