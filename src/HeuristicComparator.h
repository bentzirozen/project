//
// Created by bentzirozen on 1/14/19.
//

#ifndef PROJECT_HEURISTICCOMPARATOR_H
#define PROJECT_HEURISTICCOMPARATOR_H

#include "State.h"
template<class T>
class HeuristicComparator{
    bool operator ()(const State<T>state1,const State<T>state2) {
        return state1.getCost()+state1.getHeuristicCost() < state2.getCost()+state2.getHeuristicCost();
    }
};




#endif //PROJECT_HEURISTICCOMPARATOR_H
