
//
// Created by bentzirozen on 12/20/18.
//

#ifndef PROJECT_DEFINEVARCOMMAND_H
#define PROJECT_DEFINEVARCOMMAND_H


#include "Command.h"
#include "string"
#include "MapDB.h"
#include "Expression.h"

class DefineVarCommand : public Command {
    int &index;
    string name;
    string bindPath;
    Expression* expression = nullptr;
    MapDB* db;
public:
    DefineVarCommand(){};
    DefineVarCommand(const string &name, Expression* expression1, MapDB *db):db(db) {
        this->name = name;
        this->expression = expression1;
    }
    DefineVarCommand(const string &name, string bindPath1, MapDB *db):db(db) {
        this->name = name;
        this->bindPath = bindPath1;
    }
    double getValue()
    {
        return db->getValuesTable().at(name);
    }
    void setExpression(Expression* expression1) { this->expression = expression1; }
    void setBindPath(string bindPath1) {
        this->bindPath = bindPath1;
        this->expression = nullptr;
    }
    int execute(const vector<string>&cur_lex);
    DefineVarCommand(int &index);
};

#endif //PROJECT_DEFINEVARCOMMAND_H