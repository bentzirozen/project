
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
    CacheManager <string,string> *fileCacheManager= new FileCacheManager<string,string>();
    cout<<fileCacheManager->solution_exist("bye")<<endl;
    fileCacheManager->save_solution("hello","bye");
    cout<<fileCacheManager->solution_exist("hello")<<endl;
    fileCacheManager->save_solution("bentzi","rozen");
    return 0;
}