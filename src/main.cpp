
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
#include "MatrixSearchable.h"
#include "Searcher.h"
#include "MatrixSolver.h"
#include "BFS.h"
#include "DFS.h"
#include "BestFirstSearch.h"
#include "A_Star.h"
#include "MyParallerServer.h"

#include <iostream>
using namespace std;

BindTable *BindTable::s_instance = 0;
SymbolTable *SymbolTable::s_instance = 0;
PathsTable *PathsTable::s_instance = 0;


int main(int argc, char **argv) {
    int port = stoi(argv[1]);
    Server* myServer = new MyParallerServer();
    //choose to use the cheapest algorithm according to the 'solutions' file
    Searcher<string>* searcher = new BFS<string>();
    Solver<string, string>* solver = new MatrixSolver<string, string, string>(searcher);
    CacheManager<string, string>* cache = new FileCacheManager<string, string>();
    ClientHandler* client = new MyTestClientHandler(cache, solver);

    //open new server by the port and client
    myServer->open(port, client);
}