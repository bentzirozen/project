//
// Created by bentzirozen on 12/20/18.
//

#ifndef PROJECT_MAPDB_H
#define PROJECT_MAPDB_H

#include <map>
#include <string>
#include "Command.h"

using namespace std;


/*
 * class created in order to store var and their current values.
 */
class MapDB {
    map<string,Command*> commandTable;
    map<string,double> valuesTable;
    map<string,string> bindTable;
    map<string,double> bindValuesTable;
public:
    MapDB() {}

    map<string, Command *> &getCommandTable() { return commandTable; }

    map<string, double> &getValuesTable() { return valuesTable; }

    map<string, string> &getBindTable() { return bindTable; }

    map<string, double> &getBindValuesTable() { return bindValuesTable; }

};


#endif //PROJECT_MAPDB_H
