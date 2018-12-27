//
// Created by bentzirozen on 12/18/18.
//
#include "Parser.h"
#include "ExpressionCommand.h"


Parser::Parser(const vector<string> &parser, MapDB& database):db(database) {
    this->parser = parser;
    this->db.addCommand("openDataServer",new ExpressionCommand(new OpenServerCommand));
    this->db.addCommand("connect",new ConnectCommand);
    this->db.addCommand("var",new DefineVarCommand());
    this->db.addCommand("if", new IfCommand(<#initializer#>, <#initializer#>));
    this->db.addCommand("while",new LoopCommand());

}

vector<string> Parser::get_parser() {
    return this->parser;
}

MapDB Parser::getDB() {
    return this->db;
}

