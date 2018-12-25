//
// Created by bentzirozen on 12/18/18.
//

#include "DataReaderServer.h"
//mutex //globalMutex1;
bool DataReaderServer::isOpen = false;
std::vector<std::string> DataReaderServer::splitByComma(const char *buffer) {
    std::vector<std::string> vec;
    std::string tmp;
    while (*buffer != '\n') {
        while (*buffer != ',' && *buffer != '\n') {
            tmp += *buffer;
            ++buffer;
        }
        vec.emplace_back(tmp);
        tmp = "";
        if (*buffer != '\n') ++buffer;
    }
    return vec;
}

void DataReaderServer::updatePathsTable(vector<std::string> vec) {
    //////globalMutex1.lock();
    for (int i = 0; i < PARAMETERS_SIZE; ++i) {
        db.updatePath(pathsVec[i],vec[i]);
    }
    //globalMutex1.unlock();
}

void DataReaderServer::updateSymbolTable() {
    //globalMutex1.lock();
    for (auto iter = db.getVarTable().begin(); iter != db.getVarTable().end(); ++iter) {
        {
            if(db.atTable(db.getBindTable(),db.getBindFromTable(iter->first))) {
                db.updateVar(iter->first, db.getValueFromTable(db.getBindFromTable(iter->first)));
            }
        }
    }
    //globalMutex1.unlock();
    }
    void DataReaderServer::openServer(int port,int freq) {
    int sockfd, newsockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    int n;

    /* First call to socket() function */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    /* Initialize socket structure */
    bzero((char *) &serv_addr, sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);

    /* Now bind the host address using bind() call.*/
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    /* Now start listening for the clients, here process will
       * go in sleep mode and will wait for the incoming connection
    */

    listen(sockfd, 5);
    clilen = sizeof(cli_addr);

    /* Accept actual connection from the client */
    newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);

    if (newsockfd < 0) {
        perror("ERROR on accept");
        exit(1);
    }
    isOpen = true;
    char buffer[BUFFER_SIZE];
    std::string values;
    std::string leftovers;
    char* pointer;
    bzero(buffer, BUFFER_SIZE);
    while (true) {
        // to know where to put data:
        unsigned long start = leftovers.length() ? values.length() : 0;
        n = read(newsockfd, buffer + start, BUFFER_SIZE - start);
        std::cout << buffer +'\n';
        // points to the buffer
        pointer = buffer;
        values = "";
        if (n < 0) {
            perror("ERROR reading from socket");
            exit(1);
        }
        // creating values:
        while (*pointer != '\n'){
            values += *pointer;
            ++pointer;
        }
        ++pointer;
        values += '\n';
        // update:
        updatePathsTable(splitByComma(values.c_str()));
        updateSymbolTable();
        leftovers = "";
        // if we have unread chars:
        if (*pointer) {
            // add to leftovers:
            for (int i = 0; i < BUFFER_SIZE - values.length(); ++i) {
                leftovers += *pointer;
                ++pointer;
            }
            bzero(buffer, BUFFER_SIZE);
            // add to buffer:
            for (int j = 0; j < BUFFER_SIZE - values.length(); ++j) {
                buffer[j] = leftovers[j];
            }
        } else {
            bzero(buffer, BUFFER_SIZE);
        }
        if (n < 0) {
            perror("ERROR writing to socket");
            exit(1);
        }
    }
}

