//
// Created by bentzirozen on 1/8/19.
//

#ifndef PROJECT_A_STAR_H
#define PROJECT_A_STAR_H
#include "GraphSearcher.h"
#include "MyPriorityQueue.h"

template<class T>
class AStar:public GraphSearcher<T>{
    MyPriorityQueue<State<T>*> priorityQueue;

public:
    string search(Searchable<T>* searchable){
        //first state
        priorityQueue.push(searchable->getInitialState());
        // nodes we take cared of
        set<State<T>> closed;
        State<T>* current;
        double cost;
        while(!priorityQueue.empty()) {
            current = priorityQueue.popFropPriorityQueue();
            this->numberOfNodesEvaluated++;
            if (current == searchable->getGoalState()) {
                this->numberOfNodesEvaluated++;
            }
            priorityQueue.popFropPriorityQueue();
            closed.insert(current);
            for (State<T> *&s : searchable->getAllPossibleStates(current)) {
                //TODO COMPLETE
            }
        }
    }
};



#endif //PROJECT_A_STAR_H
