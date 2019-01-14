//
// Created by bentzirozen on 1/8/19.
//

#ifndef PROJECT_A_STAR_H
#define PROJECT_A_STAR_H
#include "HeuristicSearcher.h"
#include "MyPriorityQueue.h"

template<class T>
class AStar:public HeuristicSearcher<T>{
    MyPriorityQueue<T,HeuristicComparator<T>>open;

public:
    string search(Searchable<T>* searchable){
        State<T> *initialState = searchable->getInitialState();
        this->open.push(initialState); // push the initial state
        vector<State<T>*> closed;
        State<T> *goalState = searchable->getGoalState();
        State<T>* current;
        while (!this->open.empty()) {
            current  = this->open.popFropPriorityQueue();
            if (current->equals(goalState)) {
                return this->backTrace(current);
            }
            if (closed.contains(current)) {
                continue;
            }
            for (State<T> *state : searchable->getAllPossibleStates(current)) {
                if (!this->open.contains(state)) {
                    state->setPathCost(current->getCost() + state->getPathCost());
                    state->setFather(current);
                    state->setHeuristicCost(heuristicFunc(state, goalState));
                    this->open.push(state);
                }
            }
            closed.insertState(current);
        }
    }
};



#endif //PROJECT_A_STAR_H
