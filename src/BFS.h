//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_BFS_H
#define PROJECT_BFS_H
#include "GraphSearcher.h"

//bfs algorithm - type of graph searcher
template<class T>
class BFS:public GraphSearcher<T>{
    State<T> search(Searchable<T>* searchable);
    int getNumberOfNodesEvaluted();
};



#endif //PROJECT_BFS_H
