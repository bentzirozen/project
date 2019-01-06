//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_CACHEMANAGER_H
#define PROJECT_CACHEMANAGER_H


//cache manager interface

template <class Problem,class Solution>
class CacheManager{
protected:

public:

    virtual bool solution_exist(Problem p)=0;
    virtual Solution get_solution(Problem p)=0;
    virtual void save_solution(Problem p)=0;


};

#endif //PROJECT_CACHEMANAGER_H
