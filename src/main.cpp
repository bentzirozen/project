
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

#include <iostream>
using namespace std;

BindTable *BindTable::s_instance = 0;
SymbolTable *SymbolTable::s_instance = 0;
PathsTable *PathsTable::s_instance = 0;


int main(int argc, char **argv) {
    int result;
    string matrix = "";
    Searcher<string>* searcher = new BFS<string>();
    Solver<string, string>* solver = new
            MatrixSolver<string, string, string>(searcher);

    for (int i = 0; i < 10; i++){
        for (int i = 0; i < 9; i++){
            matrix += to_string(i)+",";
        }
        matrix += "9;";
    }
    matrix +="end;0,0;9,9";
    solver->solve(matrix);
    return 0;
}