//
// Created by bentzirozen on 12/26/18.
//

#include "PrintCommand.h"
#include "SymbolTable.h"
#include "DataReaderServer.h"


void PrintCommand::execute(const vector<string> &cur_lex) {
    // Checks if output is in symbol map. if so, prints his value. else, prints output
    globalMutex.lock();
    index++;
    while(cur_lex[index][cur_lex[index].length() - 1] != '"' && !SymbolTable::instance()->atTable(cur_lex[index])){
        str += cur_lex[index];
        str += " ";
        ++index;
    }
    str += cur_lex[index];
    ++index;
    //take the exact string
    !SymbolTable::instance()->atTable(str) ? cout << str.substr(1, str.length() - 2) :
    cout << SymbolTable::instance()->getValue((str));
    str = "";
    globalMutex.unlock();
    //assume it with /n in the end
    cout << "\n";
}

PrintCommand::PrintCommand(int &index):index(index) {

}
