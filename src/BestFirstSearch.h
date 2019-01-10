//
// Created by bentzirozen on 1/8/19.
//

#ifndef PROJECT_BESTFIRSTSEARCH_H
#define PROJECT_BESTFIRSTSEARCH_H

#include "GraphSearcher.h"
template <class T>
class BestFirstSearch:public GraphSearcher<T>{
public:
    State<T> search(Searchable<T>* searchable);
};



#endif //PROJECT_BESTFIRSTSEARCH_H
