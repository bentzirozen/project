//
// Created by bentzirozen on 1/10/19.
//

#ifndef PROJECT_MATRIXSOLVER_H
#define PROJECT_MATRIXSOLVER_H
#include "Solver.h"
#include "Searcher.h"
#include "MatrixSearchable.h"
//solve the matrix,  give solution
template <class Problem,class Solution,class T>
class MatrixSolver:public Solver<Problem,Solution>{
    Searcher<T>* searcher;

public:

    MatrixSolver(Searcher<T>* searcher){
        this->searcher = searcher;
    }
    string solve(string problem){
        MatrixSearchable<T>* matrix = new MatrixSearchable<T>();
        matrix->createMatrix(problem);
        string result = this->searcher->search(matrix);

        return result;
    }

};

#endif //PROJECT_MATRIXSOLVER_H
