//
// Created by bentzirozen on 12/18/18.
//
#include "ConnectCommand.h"
#include "thread"
#include "DataReaderServer.h"

int ConnectCommand::execute(const vector<string> &cur_lex,int index) {
    int port;
    std::string adr;
    try {
        adr = cur_lex[index + 1];
        port = stoi(cur_lex[index+2]);
    } catch (...) {
        cerr << "Syntax/Parameter Error!" << endl;
        exit(1);
    }
    while (!DataReaderServer::serverIsOpen()){
        // wait until simulator is connected
    }
    thread t(&DataWriterClient::createConnection, port, adr);
    t.join();
    return 3;
}