//
// Created by bentzirozen on 1/4/19.
//

#ifndef PROJECT_SEARCHER_H
#define PROJECT_SEARCHER_H

#include "Solution.h"
#include "Searchable.h"
template <class T>
    class Searcher{
        virtual Solution search(Searchable<T> searchable)=0;
        virtual int getNumberOfNodesEvaluted()=0;
};



#endif //PROJECT_SEARCHER_H
