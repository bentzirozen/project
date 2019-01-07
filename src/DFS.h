//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_DFS_H
#define PROJECT_DFS_H
#include "GraphSearcher.h"

//dfs algorithm - type of graph searcher
template<class T>
class DFS:public GraphSearcher<T>{
    State<T> search(Searchable<T>* searchable);
    int getNumberOfNodesEvaluted();
};



#endif //PROJECT_DFS_H
