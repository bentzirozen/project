//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_SOLVER_H
#define PROJECT_SOLVER_H

//solver interface , take a problem and solve it
template <class Problem,class Solution>
class Solver{
public:

    virtual Solution solve(Problem problem)=0;
};

#endif //PROJECT_SOLVER_H
