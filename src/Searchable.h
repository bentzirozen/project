//
// Created by bentzirozen on 1/4/19.
//

#ifndef PROJECT_SEARCHABLE_H
#define PROJECT_SEARCHABLE_H

#include "State.h"
//searchable interface
template <class T>
class Searchable {
public:
    virtual State<T> getInitialState() = 0;
    virtual State<T> getGoalState() = 0;
    virtual int getAllPossibleStates(State<T> s) = 0;
    virtual ~Searchable() {};
};

#endif //PROJECT_SEARCHABLE_H