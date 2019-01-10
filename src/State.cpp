//
// Created by bentzirozen on 1/4/19.
//
#include "State.h"

template<class T>
State<T>::State(T state) {
    this->state = state;
    this->cameFrom = nullptr;
}

template<class T>
void State<T>::setCost(double cost) {
    this->cost = cost;
}

template<class T>
bool State<T>::equal(State<T> other_state) {
    return other_state == state;
}

template<class T>
void State<T>::setFather(State<T> father) {
    this->cameFrom = father;
}

template<class T>
double State<T>::getCost() {
    return this->cost;
}



