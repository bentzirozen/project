//
// Created by bentzirozen on 12/27/18.
//

#include "AssignCommand.h"
#include "../Server and Client/DataReaderServer.h"

AssignCommand::AssignCommand( int &index) : index(index){}

void AssignCommand::execute(const vector<string> &cur_lex) {
    Shuntingyard shuntingyard;
    string key = cur_lex[index];
    if(key=="{"){
        key = cur_lex[index+1];
        index++;
    }
    index += 2; // skip key and '='
    double val = shuntingyard.algorithm(shuntingyard.extract_string(cur_lex[index]));
    globalMutex.lock();
    SymbolTable::instance()->setValue(key,val);
    if (BindTable::instance()->getValue(key)[0] == '/'){
        const string msg = "set " + BindTable::instance()->getValue(key) +
                           " " + to_string(val) + "\r\n";
        globalMutex.unlock();
        DataWriterClient::setMessage(msg);
    } else {
        SymbolTable::instance()->setValue(BindTable::instance()->getValue(key), val);
        globalMutex.unlock();
    }
    ++index;
}

