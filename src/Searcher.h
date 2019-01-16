//
// Created by bentzirozen on 1/4/19.
//

#ifndef PROJECT_SEARCHER_H
#define PROJECT_SEARCHER_H

#include "State.h"
#include "Searchable.h"
#include <list>
#include <set>
using namespace std;


template <class T>
    class Searcher{
    protected:
        double cost;
        int numberOfNodesEvaluated;
    public:
        virtual string search(Searchable<T>* searchable)=0;
        virtual int getNumberOfNodesEvaluted()=0;
        virtual double getTotalCost()=0;
        ~Searcher(){};
};



#endif //PROJECT_SEARCHER_H
