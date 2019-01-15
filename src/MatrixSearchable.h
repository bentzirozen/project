//
// Created by bentzirozen on 1/10/19.
//

#ifndef PROJECT_MATRIXSEARCHABLE_H
#define PROJECT_MATRIXSEARCHABLE_H
#include "Searchable.h"
#include <sstream>
#include <fstream>

template <class T>
class MatrixSearchable:public Searchable<T>{
    vector<vector<State<T>*>> matrix;
    State <T>* initialState;
    State <T>* goalState;
    int numOfRows;

public:
    MatrixSearchable(){
        this->numOfRows = 0;
    }
    State<T>* getInitialState(){
        return this->initialState;
    }
    State<T>* getGoalState(){
        return this->goalState;
    }
    void addLineToMatrix(string line){
        string delimiter = ",";
        vector<State<T>*> rowVector;
        double cost;
        int col = 0;

        char* temp = const_cast<char *>(line.c_str());
        temp = strtok(temp, ",");

        while (temp != NULL) {
            cost = atof(temp);
            temp = strtok(NULL, ",");

            State<string>* newState = new State<string>();
            string name = to_string(this->numOfRows) + delimiter + to_string(col);
            newState->setState(name);
            newState->setCost(cost);
            rowVector.push_back(newState);

            col++;
        }
        this->matrix.push_back(rowVector);
        this->numOfRows++;
    }
    void createMatrix(string matrix){
        list<string>strings;
        char* temp = const_cast<char *>(matrix.c_str());
        temp = strtok(temp, "\n");

        while (temp != NULL){
            strings.push_back(temp);
            temp = strtok(NULL, "\n");
        }

        list<string>::iterator it;
        it = strings.begin();

        while ((*it) != "end") {
            string newRow = (*it);
            this->addLineToMatrix(newRow);
            it++;
        }




        initialState = getStateByIndex(0,0);
        goalState = getStateByIndex(numOfRows-1, numOfRows-1);
    }

    State<T>* getStateByIndex(int row, int col){
        return this->matrix[row][col];
    }
    list<State<T>*> getAllPossibleStates(State<T>* state){
        list<State<T>*> succerssors;
        State<T>* val;
        string name = state->getState();
        char* divide = const_cast<char *>(name.c_str());
        int i = stoi(strtok(divide, ","));
        int j = stoi(strtok(NULL, ","));
        //down neighbor
        if ((i + 1) <= (this->numOfRows - 1)){
            val = matrix[i+1][j];
            if(val->getCost()!=-1) {
                succerssors.push_back(matrix[i + 1][j]);
            }
        }
        //up neighbor
        if ((i - 1) >= 0){
            val = matrix[i-1][j];
            if(val->getCost()!=-1) {
                succerssors.push_back(matrix[i - 1][j]);
            }
        }
        //right neighbor
        if ((j + 1) <= (matrix[0].size() - 1)){
            val = matrix[i][j+1];
            if(val->getCost()!=-1) {
                succerssors.push_back(matrix[i][j + 1]);
            }
        }
        //left neighbor
        if ((j - 1) >= 0){
            val = matrix[i][j-1];
            if(val->getCost()!=-1) {
                succerssors.push_back(matrix[i][j - 1]);
            }
        }

        return succerssors;

    }
    vector<vector<State<T>*>>getMatrix(){
        return this->matrix;
    }

};

#endif //PROJECT_MATRIXSEARCHABLE_H
