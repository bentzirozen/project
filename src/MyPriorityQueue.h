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
template <class T,class compare>
class MyPriorityQueue:public priority_queue<State<T>*,vector<State<T>*>,compare<T>>{
    MyPriorityQueue priorityQueue;
public:

    T remove(const T &value) {
        auto it = find(this->c.begin(), this->c.end(), value);
        if (it != this->c.end()) {
            T st = *it;
            this->c.erase(it);
            make_heap(this->c.begin(), this->c.end(), this->comp);
            return st;
        }
    }
    bool atPriorityQueue(const T &value) {
        auto it = find(this->c.begin(), this->c.end(), value);
        return it != this->c.end();
    }
    State<T>* popFropPriorityQueue(){
       State<T>* tmpState = this->priorityQueue.top();
       this->priorityQueue.pop();
        return tmpState;
    }
    inline void make_heaps(){
        make_heap(this->c.begin(), this->c.end(), this->comp);
    }

};

#endif //PROJECT_MYPRIORITYQUEUE_H
