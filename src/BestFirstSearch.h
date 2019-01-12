//
// Created by bentzirozen on 1/8/19.
//

#ifndef PROJECT_BESTFIRSTSEARCH_H
#define PROJECT_BESTFIRSTSEARCH_H

#include "GraphSearcher.h"
#include <queue>;
#include "MyPriorityQueue.h"


template <class T>
class BestFirstSearch:public GraphSearcher<T>{
    MyPriorityQueue<State<T>*> priorityQueue;
public:


    string search(Searchable<T>* searchable){
       //first state
        priorityQueue.push(searchable->getInitialState());
        // set for nodes that we finished to deal with
        set<State<T>> closed;
        while (!priorityQueue.empty()) {
            // pop the min of all odes
            State<T>* current = priorityQueue.popFropPriorityQueue();
            closed.insert(current);
            this->numberOfNodesEvaluated++;
            // goal state -> finish
            if (current == searchable->getGoalState()) {
                this->numberOfNodesEvaluated++;
                backTrace(searchable->getGoalState(),searchable);
                
            }
            for(State<T>*& s : searchable->getAllPossibleStates(current)) {
                bool inOpenQueue = priorityQueue.atPriorityQueue(s);
                bool inCloseQueue = find(closed.begin(), closed.end(), s) != closed.end();
                // add to out queue
                if (!inOpenQueue && !inCloseQueue) {
                    priorityQueue.push(s);
                    this->priorityQueue.heapify();
                } else {
                    // if item in close, skip
                    if (inCloseQueue) continue;
                    State<T> tmp = priorityQueue.remove(s);
                    // if item is better, means better path, update tmp
                    if (s < tmp) {
                        tmp.setCameFrom(s->getFather());
                        tmp.setCost(s->getCost());
                    }
                    // reenter temp to queue
                    priorityQueue.push(tmp);
                    priorityQueue.make_heaps();

                }
            }
        }
    }
};



#endif //PROJECT_BESTFIRSTSEARCH_H
