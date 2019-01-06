//
// Created by bentzirozen on 1/2/19.
//

#include "FileCacheManager.h"
#include <iostream>
using namespace std;

template <class Problem,class Solution>

bool FileCacheManager<Problem,Solution>::solution_exist(Problem p) {
    return this->sol_map.find(p) != this->sol_map.end();
}
template <class Problem,class Solution>
Solution FileCacheManager<Problem,Solution>::get_solution(Problem p) {
    return this->sol_map.at(p);
}
template <class Problem,class Solution>
void FileCacheManager<Problem,Solution>::save_solution(Problem p,Solution s) {
    this->sol_map.insert(pair<Problem,Solution>(p,s));

}
template class FileCacheManager<string,string>;

