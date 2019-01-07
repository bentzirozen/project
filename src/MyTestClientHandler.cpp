//
// Created by bentzirozen on 1/2/19.
//

#include "MyTestClientHandler.h"

template <class Problem,class Solution>
void MyTestClientHandler<Problem,Solution>::handleClient(int sockFd) {
    string solution;
    ssize_t n;
    while(true) {
        char buffer[BUFFER_SIZE];
        // start comunicate
        bzero(buffer, BUFFER_SIZE);
        n = read(sockFd, buffer, BUFFER_SIZE);

        //finish the conversetion.
        if(strcmp(buffer,"end") == 0){
            return;
        }
        if (n < 0) {
            perror("ERROR reading from socket");
            exit(1);
        }
        //if solution dont exist , so solve it
        if(!this->cacheManager->solution_exist(buffer)){
            solution = this->solver->solve(buffer);
            this->cacheManager->save_solution(solution, buffer);
        }
        //write the solution
        solution = this->cacheManager->get_solution(buffer);
        ssize_t n = write(sockFd, solution.c_str(), BUFFER_SIZE);
        if (n < 0) {
            perror("ERROR writing to socket");
            exit(1);
        }
    }
}


template class MyTestClientHandler<string,string>;