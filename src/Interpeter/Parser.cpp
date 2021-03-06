//
// Created by bentzirozen on 12/18/18.
//
#include "Parser.h"
#include "../Commands/ExpressionCommand.h"

//parse all commands that exists
Parser::Parser(const vector<string> &cur_lex,int& index):index(index) {
    commandsTable["openDataServer"]=new ExpressionCommand(new OpenServerCommand(index),cur_lex);
    commandsTable["connect"]=new ExpressionCommand(new ConnectCommand(index),cur_lex);
    commandsTable["var"]=new ExpressionCommand(new DefineVarCommand(index),cur_lex);
    commandsTable["if"]= new ExpressionCommand(new IfCommand(index),cur_lex);
    commandsTable["print"]=new ExpressionCommand(new PrintCommand(index),cur_lex);
    commandsTable["sleep"]=new ExpressionCommand(new SleepCommand(index),cur_lex);
    commandsTable["assign"]=new ExpressionCommand(new AssignCommand(index),cur_lex);
    commandsTable["while"]=new ExpressionCommand(new LoopCommand(commandsTable,index),cur_lex);
}

//run all the script
void Parser::run(const vector<string> &cur_lex) {
    string item;
    while (index < cur_lex.size()) {
        item= cur_lex[index];
        //get the command from table
        Expression *expression = commandsTable[(cur_lex[index])];
        if(expression== nullptr) {
            if(cur_lex[index] == "{" || cur_lex[index] == "}") {
                index ++;
                continue;
            }
            // check if there is a var in the symbolTable
            if(SymbolTable::instance()->atTable(cur_lex[index]))
                commandsTable.erase(cur_lex[index]);
            // if there is, assign the command
            expression = commandsTable.at("assign");
            // if there is no expression like this, throw error.
            if (expression == nullptr) throw runtime_error(string("no legal expression"));
        }
        expression->calculate();
    }
}

Parser::~Parser() {
    for (auto const &command:commandsTable) {
        delete command.second;
    }
}
