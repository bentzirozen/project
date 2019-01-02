//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_CACHEMANAGER_H
#define PROJECT_CACHEMANAGER_H

#include "Solution.h"
#include "Problem.h"

//cache manager interface


class CacheManager{
public:

    virtual bool solution_exist(Problem p)=0;
    virtual Solution get_solution(Problem p)=0;
    virtual void save_solution(Problem p)=0;


};

#endif //PROJECT_CACHEMANAGER_H
