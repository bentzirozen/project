
#include <iostream>
#include <strings.h>
#include "Tables/BindTable.h"
#include "Tables/SymbolTable.h"
#include "Tables/PathsTable.h"
#include "list"
#include "Interpeter/Lexer.h"
#include "Commands/ConnectCommand.h"
#include "Interpeter/Parser.h"
#include "Commands/OpenServerCommand.h"
#include <stack>
using namespace std;

/**
 *  all the tables is singeltons and dont have a cpp file for it and they all statics we initialize them in the main
 */
BindTable *BindTable::s_instance = 0;
SymbolTable *SymbolTable::s_instance = 0;
PathsTable *PathsTable::s_instance = 0;

int main(int argc, char **argv) {
    int index =0;
    Lexer lexer;
    vector<string> cur_lex = lexer.split_from_file(argv[1]);
    Parser parser(cur_lex, index);
    parser.run(cur_lex);
    close(DataReaderServer::getSocketFD());
    close(DataWriterClient::getSocketFD());
    return 0;
}