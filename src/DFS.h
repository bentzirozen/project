//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_DFS_H
#define PROJECT_DFS_H
#include "GraphSearcher.h"

//dfs algorithm - type of graph searcher

template<class T>
class DFS:public GraphSearcher<T>{
    string search(Searchable<T>* searchable) {
        list<State<T> *> open;  // will be treated as a stack
        set<State<T> *> close;
        State<T> *current;
        open.push_back(searchable->getInitialState());
        while (!open.empty()) {
            current = open.back();
            open.pop_back();
            close.insert(current);
            if (current == searchable->getGoalState()) {
                this->numberOfNodesEvaluated++;
                return this->backTrace(current, searchable);
            }
            this->numberOfNodesEvaluated++;
            for (State<T> *&s : searchable->getAllPossibleStates(current)) {
                if (close.find(s) == close.end() && find(open.begin(), open.end(), s) == open.end()) {
                    s->setFather(current);
                    open.push_back(s);
                }
            }
        }
        return "-1";//no solution
    }
    int getNumberOfNodesEvaluted(){
        return this->numberOfNodesEvaluated;
    }
};



#endif //PROJECT_DFS_H
