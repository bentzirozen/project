//
// Created by bentzirozen on 12/17/18.
//
#include "OpenServerCommand.h"
#include "DataReaderServer.h"

int OpenServerCommand::execute(const vector<string>&cur_lex,int index) {
    // new thread that opens a server.
    thread t1(&OpenServerCommand::openServer, this, stoi(cur_lex[index+1].c_str()), stoi(cur_lex[index+2].c_str()));
    t1.join();
    return 3;

}
