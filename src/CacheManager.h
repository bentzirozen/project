//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_CACHEMANAGER_H
#define PROJECT_CACHEMANAGER_H

#include <map>
#include <string>
using namespace std;

//cache manager interface

template <class Problem,class Solution>
class CacheManager{
protected:
    map<string,string> sol_map;
public:

    virtual bool solution_exist(Problem p)=0;
    virtual Solution get_solution(Problem p)=0;
    virtual void save_solution(Problem p,Solution S)=0;


};

#endif //PROJECT_CACHEMANAGER_H
