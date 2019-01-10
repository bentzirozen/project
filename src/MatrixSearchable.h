//
// Created by bentzirozen on 1/10/19.
//

#ifndef PROJECT_MATRIXSEARCHABLE_H
#define PROJECT_MATRIXSEARCHABLE_H
#include "Searchable.h"

template <class T>
class MatrixSearchable:public Searchable<T>{
    vector<vector<int>> matrix;
public:

    MatrixSearchable(vector<vector<int>> matrix){
        this->matrix = matrix;
    }
    State<T> getInitialState(){

    }

};

#endif //PROJECT_MATRIXSEARCHABLE_H
