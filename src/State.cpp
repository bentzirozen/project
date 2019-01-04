//
// Created by bentzirozen on 1/4/19.
//
#include "State.h"

template<class T>
State<T>::State(T state) {
    this->state = state;
}

template<class T>
void State<T>::setCost(double cost) {
    this->cost = cost;
}

template<class T>
bool State<T>::equal(State<T> other_state) {
    return other_state == state;
}



