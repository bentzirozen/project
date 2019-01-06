
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
#include "CacheManager.h"
#include "FileCacheManager.h"
#include "StringReverser.h"
#include "MySerialServer.h"
#include "ClientHandler.h"
#include "MyTestClientHandler.h"

#include <iostream>
using namespace std;

BindTable *BindTable::s_instance = 0;
SymbolTable *SymbolTable::s_instance = 0;
PathsTable *PathsTable::s_instance = 0;


int main(int argc, char **argv) {
    MySerialServer tester;
    ClientHandler *clientHandler= new MyTestClientHandler<string,string>;
    tester.open(5400,clientHandler);
    return 0;
}