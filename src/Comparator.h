//
// Created by bentzirozen on 1/10/19.
//

#ifndef PROJECT_COMPARATOR_H
#define PROJECT_COMPARATOR_H
#include "State.h"
//compares 2 possible states

template<class T>
class Comparator{
public:

    Comparator(){};
    //object adapter
    bool operator ()( State<T>state1, State<T>state2){
        return state1.getCost()< state2.getCost();
    }
};
#endif //PROJECT_COMPARATOR_H
