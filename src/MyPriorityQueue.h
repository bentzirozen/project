//
// Created by bentzirozen on 1/11/19.
//

#ifndef PROJECT_MYPRIORITYQUEUE_H
#define PROJECT_MYPRIORITYQUEUE_H
#include <queue>
#include <algorithm>
#include <iostream>
#include "State.h"
#include "Comparator.h"
//extend of original priority queue,  adding functionallity
using namespace std;

template<class T>
class MyPriorityQueue:public priority_queue<T,vector<T>,Comparator<T>>{

public:
    T remove(const T &value) {
        auto it = std::find(this->c.begin(), this->c.end(), value);
        if (it != this->c.end()) {
            T st = *it;
            this->c.erase(it);
            this->make_heaps();
            return st;
        }
    }
    bool atPriorityQueue(const T &value) {
        auto it = std::find(this->c.begin(), this->c.end(), value);
        return it != this->c.end();
    }
    inline void make_heaps(){
        make_heap(this->c.begin(), this->c.end(), this->comp);
    }
    ~MyPriorityQueue(){};

};

#endif //PROJECT_MYPRIORITYQUEUE_H
