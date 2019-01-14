//
// Created by bentzirozen on 1/8/19.
//

#ifndef PROJECT_BESTFIRSTSEARCH_H
#define PROJECT_BESTFIRSTSEARCH_H

#include "GraphSearcher.h"
#include <queue>
#include "MyPriorityQueue.h"


template <class T>
class BestFirstSearch:public GraphSearcher<T>{
    MyPriorityQueue<State<T>*,Comparator<T>> priorityQueue;
public:


    string search(Searchable<T>* searchable){
       //first state
        priorityQueue.push(searchable->getInitialState());
        // nodes we take cared of
        set<State<T>> closed;
        State<T>* current;
        while (!priorityQueue.empty()) {
            current = priorityQueue.popFropPriorityQueue();
            closed.insert(current);
            this->numberOfNodesEvaluated++;
            if (current == searchable->getGoalState()) {
                this->numberOfNodesEvaluated++;
                backTrace(searchable->getGoalState(),searchable);
                
            }
            for(State<T>*& s : searchable->getAllPossibleStates(current)) {
                bool inOpenQueue = priorityQueue.atPriorityQueue(s);
                bool inCloseQueue = find(closed.begin(), closed.end(), s) != closed.end();
                // add to final queue
                if (!inOpenQueue && !inCloseQueue) {
                    priorityQueue.push(s);
                    this->priorityQueue.make_heaps();
                } else {
                    // if item in close queue , we dealt with it , skip
                    if (inCloseQueue) continue;
                    State<T>* tmpState = priorityQueue.remove(s);
                    //update if its better
                    if (s < tmpState) {
                        tmpState->setCameFrom(s->getFather());
                        tmpState->setCost(s->getCost());
                    }
                    // reenter temp to queue
                    priorityQueue.push(tmpState);
                    priorityQueue.make_heaps();

                }
            }
        }
    }
};



#endif //PROJECT_BESTFIRSTSEARCH_H
