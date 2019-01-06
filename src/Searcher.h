//
// Created by bentzirozen on 1/4/19.
//

#ifndef PROJECT_SEARCHER_H
#define PROJECT_SEARCHER_H

#include "State.h"
#include "Searchable.h"
template <class T>
    class Searcher{
        virtual State<T> search(Searchable<T>* searchable)=0;
        virtual int getNumberOfNodesEvaluted()=0;
};



#endif //PROJECT_SEARCHER_H
