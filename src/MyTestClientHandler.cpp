//
// Created by bentzirozen on 1/2/19.
//

#include "MyTestClientHandler.h"

template <class Problem,class Solution>
void MyTestClientHandler<Problem,Solution>::handleClient(int sockFd) {
    int clilen;
    ssize_t n;
    bool keepReading = true;


    while(keepReading) {
        char buffer[BUFFER_SIZE];
        // If connection is established then start communicating
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

        if(!this->cacheManager->solution_exist(buffer)){
            string solution = this->solver->solve(buffer);
            this->cacheManager->save_solution(solution, buffer);
        }

        this->writeTheSolution(sockFd,buffer);
    }
}

template<class Problem, class Solution>
void MyTestClientHandler<Problem, Solution>::writeTheSolution(int id, const char* buffer) {
    string solution = this->cacheManager->get_solution(buffer);
    ssize_t n = write(id, solution.c_str(), BUFFER_SIZE);
    if (n < 0) {
        perror("ERROR writing to socket");
        exit(1);
    }

}

template class MyTestClientHandler<string,string>;