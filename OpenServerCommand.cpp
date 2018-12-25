//
// Created by bentzirozen on 12/17/18.
//
#include "OpenServerCommand.h"
#include "DataReaderServer.h"
struct MyParams
{
    int port;
    int freq;
};

int OpenServerCommand::execute(const vector<string>&cur_lex,int index) {
    DataReaderServer dataReaderServer(this->db);
    std::thread t1(&DataReaderServer::openServer,dataReaderServer, stoi(cur_lex[index + 1]), stoi(cur_lex[index + 2]));
    t1.join();
    return 3;

}
