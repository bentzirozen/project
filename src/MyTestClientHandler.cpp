//
// Created by bentzirozen on 1/15/19.
//

#include "MyTestClientHandler.h"

void MyTestClientHandler::handleClient(int sockFd) {
    char buffer[1025];
    int n;
    string problem, solution;
    //read from the socket
    while (true) {
        bzero(buffer, 1025);
        n = read(sockFd, buffer, 1024);
        //if there is a problem reading from the socket
        if (n < 0) {
            perror("ERROR reading from socket");
            exit(1);
        }
        problem = string(buffer);
        if (strcmp(buffer, "end") == 0||strcmp(buffer,"end\n")==0) {
            return;
        }
        //check if problem in cache
        if (this->cacheManager->solution_exist(problem)) {
            //get the solution
            solution = this->cacheManager->get_solution(problem);
        } else {
            //solve the problem
            solution = this->solver->solve(problem);
            //save for next time
            this->cacheManager->save_solution(problem, solution);
        }
        //write to the socket
        char bufferWrite[1024];
        bzero(bufferWrite, 1025);
        strcpy(bufferWrite, solution.c_str());
        ssize_t nBuffer = write(sockFd, bufferWrite, strlen(bufferWrite));

        //if there is problem writing to the socket
        if (nBuffer < 0) {
            perror("ERROR writing to socket");
            exit(1);
        }
    }
}

MyTestClientHandler::MyTestClientHandler(CacheManager <string, string> *pManager, Solver <string, string> *pSolver) {
    this->cacheManager = pManager;
    this->solver = pSolver;
}
