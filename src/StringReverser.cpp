//
// Created by bentzirozen on 1/6/19.
//


#include "StringReverser.h"
//reverse the string and return it
string StringReverser::solve(string problem) {
    reverse(problem.begin(),problem.end());
    return problem;
}

