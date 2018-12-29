//
// Created by bentzirozen on 12/18/18.
//

#include <iostream>
#include "OpenServerCommand.h"
#include <thread>
#include "Shuntingyard.h"



void OpenServerCommand::execute(const vector<string>&cur_lex) {
    Shuntingyard shuntingyard;
    int port, freq;
    try {
        //shunting yard algorithm returns double..
        port = (int)shuntingyard.algorithm(cur_lex[index + 1]);
        freq = (int)shuntingyard.algorithm(cur_lex[index + 2]);
        index += 3;
    } catch (...) {
        cerr << "ERROR : WRONG PASSING PARAMETERS" << endl;
        exit(1);
    }
    thread t(&DataReaderServer::openServer, port, freq);
    while (!DataReaderServer::isOpen()){
        //wait..
    }
    t.detach();
}

OpenServerCommand::OpenServerCommand(int &index):index(index) {

}
