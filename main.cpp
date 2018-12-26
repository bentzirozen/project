#include <iostream>
#include <string>
#include <map>
#include <string>
#include "Lexer.h"
#include "Parser.h"
BindingTable *BindingTable::s_instance = 0; // singleton
SymbolTable *SymbolTable::s_instance = 0; // singleton
PathsTable *PathsTable::s_instance = 0; // singleton

int main(int argc, char* argv[]) {
    int index = 0;
    Lexer lexer;
    if (argc == 2) {
        lexer.split_from_file(argv[1]);
    } else {
        lexer.split_from_command_line();
    }
    MapDB db;
    vector<string> cur_lexer = lexer.get_lexer();
    Parser parser = Parser(cur_lexer, db);
    Command *c;
    while (cur_lexer[index] != "250") {
        c = db.getCommand(cur_lexer[index]);
        if (c != NULL) {
            index += c->execute(cur_lexer, index);
        } else {
            cout << "cya babe" << endl;
        }
    }
    return 0;
}