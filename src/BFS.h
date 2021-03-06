//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_BFS_H
#define PROJECT_BFS_H
#include "GraphSearcher.h"

//bfs algorithm - type of graph searcher

template<class T>
class BFS:public GraphSearcher<T>{
public:

    BFS(){};
    string search(Searchable<T>* searchable){
        list<State<T>*> open;  // will be treated as a stack
        set<State<T>*> close;
        State<T>* current;

        open.push_back(searchable->getInitialState());
        while (!open.empty()) {
            current = open.front();
            open.pop_front();
            close.insert(current);
            if (current == searchable->getGoalState()) {
                this->numberOfNodesEvaluated++;
                return this->backTrace(current,searchable);
            }
            this->numberOfNodesEvaluated++;
            for (State<T>*& s : searchable->getAllPossibleStates(current)) {
                if (close.find(s) == close.end() && find(open.begin(), open.end(), s) == open.end()) {
                    s->setFather(current);
                    open.push_back(s);
                }
            }
        }
        return "-1"; //no solution
    }
    int getNumberOfNodesEvaluted(){
        return this->numberOfNodesEvaluated;
    }
};



#endif //PROJECT_BFS_H
