//
// Created by bentzirozen on 1/2/19.
//

#include "FileCacheManager.h"

template <class Problem,class Solution>

bool FileCacheManager<Problem,Solution>::solution_exist(Problem p) {
    return false;
}
template <class Problem,class Solution>
Solution FileCacheManager<Problem,Solution>::get_solution(Problem p) {
    return Solution();
}
template <class Problem,class Solution>
void FileCacheManager<Problem,Solution>::save_solution(Problem p) {

}

