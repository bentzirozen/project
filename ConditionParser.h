//
// Created by bentzirozen on 12/22/18.
//

#ifndef PROJECT_CONDITIONPARSER_H
#define PROJECT_CONDITIONPARSER_H

#include "Command.h"
#include "MapDB.h"

class Lexer;

class ConditionParser : public Command {
public:
    vector<string> condition;
    vector<string> text;
    map<string, double>* symbols;
    map<string, string> *paths;
    int pos;
    int endOfLoopIndex;
    list<Command *> myCommands;
    map<string, bool (ConditionParser::*)(double, double)> mapFunc;
    Lexer *myLex;
    MapDB& db;

    // only the sons implement.
    virtual int doCommand(vector<string> &, int pos);
    ConditionParser(const vector<string>&lexer,MapDB db);
    ConditionParser();

    void makeMeCommands();

    int getCond(int pos);

    //checks if the conditions is met.
    virtual bool checkCondition();

    virtual bool checkOperand(string c);

    virtual bool bigger(double, double);

    virtual bool smaller(double, double);

    virtual bool equal(double, double);

    virtual bool notEqual(double, double);

    virtual bool notZero(double, double);

    virtual bool biggerOrEqual(double, double);

    virtual bool smallerOrEqual(double, double);
};


#endif //PROJECT_CONDITIONPARSER_H
