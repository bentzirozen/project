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
    map<string, double> symbolTable;
    map<string, string> pathTable;
    map<string,string> bindTable;
    map<string, Command*> commandTable;

public:
    // get varTable.
    map<string, double> &getVarTable();
    void updateVar(string varName, double value);
    double getValueFromTable(const string &varName);

    // getVarPath
    map<string, string> &getPathTable();
    void updatePath(string varName, string path);
    string getPathFromTable(const string &varName);

    // getCommand
    map<string, Command*> &getCommandTable();
    void addCommand(string varName, Command* command);
    Command* getCommand(const string &CommandName);

    map<string,string>&getBindTable();
    void updateBind(string& key,string&varName);


    //get values from tables
    template <class T,class T2>
    inline bool atTable(map<T,T2>map,string& val){
        return map.find(val) != map.end();
    }
    template <class T,class T2>
    inline T2 getFromTable(map<T,T2>map,string&val){
        return map[val];
    }
};


#endif //PROJECT_MAPDB_H
