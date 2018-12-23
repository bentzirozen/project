//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_DATAREADERSERVER_H
#define PROJECT_DATAREADERSERVER_H

#include <unistd.h>
#include <regex>
#include <iostream>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <vector>
#include <map>
using namespace std;
class DataReaderServer {
public:
    //reference to my symbol table.
    map<string, double> sym_tbl;
    void operator()(vector<string>parameters);
    DataReaderServer(map<string, double > &vars);
    DataReaderServer(){};
    bool is_number(string s);


};


#endif //PROJECT_DATAREADERSERVER_H
