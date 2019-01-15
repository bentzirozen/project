
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

#include <iostream>
using namespace std;

BindTable *BindTable::s_instance = 0;
SymbolTable *SymbolTable::s_instance = 0;
PathsTable *PathsTable::s_instance = 0;


int main(int argc, char **argv) {
    int result;
    string matrix = "";
    Searcher<string>* searcher = new AStar<string>();
    Solver<string, string>* solver = new
            MatrixSolver<string, string, string>(searcher);

    for (int i = 1; i <= 5; i++){
        for (int i = 1; i <= 4; i++){
            matrix += to_string(i)+",";
        }
        matrix += "5\n";
    }
    matrix +="end\n 0,0\n 4,4";
    solver->solve(matrix);
    return 0;
}