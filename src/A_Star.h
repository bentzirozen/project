//
// Created by bentzirozen on 1/8/19.
//

#ifndef PROJECT_A_STAR_H
#define PROJECT_A_STAR_H
#include "GraphSearcher.h"
template<class T>
class AStar:public GraphSearcher<T>{
public:

    State<T> search(Searchable<T>* searchable);
};



#endif //PROJECT_A_STAR_H
