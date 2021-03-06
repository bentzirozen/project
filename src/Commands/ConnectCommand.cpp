//
// Created by bentzirozen on 12/18/18.
//
#include "ConnectCommand.h"
#include "thread"
#include "../Server_and_Client/DataReaderServer.h"
#include "../Expression/Shuntingyard.h"

void ConnectCommand::execute(const vector<string> &cur_lex) {
    Shuntingyard shuntingYard;
    int port;
    string adress;
    try {
        adress = cur_lex[index + 1];
        port = (int)(shuntingYard.algorithm(cur_lex[index + 2]));
        index+=3;
    } catch (...) {
        cerr << "ERROR : WRONG PASSING PARAMETERS"<< endl;
        exit(1);
    }

    DataWriterClient::createConnection(port, adress);
}

ConnectCommand::ConnectCommand(int &index):index(index) {
}
