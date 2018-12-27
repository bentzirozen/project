//
// Created by bentzirozen on 12/18/18.
//

#include <iostream>
#include "OpenServerCommand.h"
#include <thread>
//#include "ExpressionsParser.h"



int OpenServerCommand::execute(const vector<string> &words,int index) {
    int port, hz;
    try {
        port = stoi(words[index+1]);
        hz = stoi(words[index+2]);
        index += 3;
    } catch (...) {
        cerr << "Syntax/Parameter Error!" << endl;
        exit(1);
    }
    thread t(&DataReaderServer::openServer, port, hz);
    while (!DataReaderServer::isOpen()){
        // wait...
    }
    t.join();
    return 3;
}

OpenServerCommand::OpenServerCommand(int &index):index(index) {

}
