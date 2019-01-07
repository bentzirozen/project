//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_FILECACHEMANAGER_H
#define PROJECT_FILECACHEMANAGER_H

#include "CacheManager.h"
#include <vector>
#include <map>
using namespace std;
template<class Problem,class Solution>
class FileCacheManager:public CacheManager<Problem,Solution>{
public:
    FileCacheManager();
    bool solution_exist(Problem p);
    Solution get_solution(Problem p);
    void save_solution(Problem p,Solution s);
    void load_sol_table();

};

#endif //PROJECT_FILECACHEMANAGER_H
