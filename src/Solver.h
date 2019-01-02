//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_SOLVER_H
#define PROJECT_SOLVER_H
#include "Solution.h"
#include "Problem.h"

//solver interface , take a problem and solve it

class Solver{
    virtual Solution solve(Problem problem)=0;
};

#endif //PROJECT_SOLVER_H
