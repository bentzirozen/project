//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_GRAPHSEARCHER_H
#define PROJECT_GRAPHSEARCHER_H
#include "Searcher.h"
#include "Searchable.h"

//interface for searchers that using graph
template<class T>
class GraphSearcher:public Searcher<T>{

public:

    virtual State<T> search(Searchable<T>* searchable)=0;
     int getNumberOfNodesEvaluted(){
         return this->numberOfNodesEvaluated;
     }
};
#endif //PROJECT_GRAPHSEARCHER_H
