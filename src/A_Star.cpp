//
// Created by bentzirozen on 1/8/19.
//
#include "A_Star.h"

template<class T>
State<T> AStar<T>::search(Searchable<T> *searchable) {
    list<State<T>>open;
    list<State<T>>close;
    State<T> cur_node;
    open.push_back(searchable->getInitialState());
    while(!open.empty()){
        cur_node = open.pop_front();
        if(cur_node == searchable->getGoalState()){
            return cur_node;
        }

    }
}


