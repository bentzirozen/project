//
// Created by bentzirozen on 12/25/18.
//

#ifndef PROJECT_DATAWRITERCLIENT_H
#define PROJECT_DATAWRITERCLIENT_H
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include "../Commands/Command.h"

#include <string.h>
using namespace std;


class DataWriterClient {
     static string message;
     static int socketFd;
public:
    //static because its depend on state
    static void setMessage(const string &message_str);

    static void createConnection(int port, string address);

     inline static int getSocketFD(){
         return socketFd;
     }

};


#endif //PROJECT_DATAWRITERCLIENT_H
