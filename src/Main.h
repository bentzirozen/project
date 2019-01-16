//
// Created by bentzirozen on 1/16/19.
//

#ifndef PROJECT_MAIN_H
#define PROJECT_MAIN_H

#include "MyParallerServer.h"
#include "Solver.h"
#include "Searcher.h"
#include "CacheManager.h"
#include "A_Star.h"
#include "FileCacheManager.h"
#include "MatrixSolver.h"
#include "MyTestClientHandler.h"

namespace boot{
    class Main{
    public:
        int main(int argc, char* argv[]) {
            //if there are not 2 args that past to the main
            if(argc != 2){
                cout<<"wrong passing parameters";
                exit(4);
            }
            int port = stoi(argv[1]);
            Server* myServer = new MyParallerServer();
            Searcher<string>* searcher = new AStar<string>();
            Solver<string, string>* solver = new MatrixSolver<string, string, string>(searcher);
            CacheManager<string, string>* cache = new FileCacheManager<string, string>();
            ClientHandler* client = new MyTestClientHandler(cache, solver);
            //open new server by the port and client
            myServer->open(port, client);

            return 0;
        }
        ~Main(){};
    };

};

#endif //PROJECT_MAIN_H
