//
// Created by bentzirozen on 1/13/19.
//

#ifndef PROJECT_HEURISTICSEARCHER_H
#define PROJECT_HEURISTICSEARCHER_H
#include "Searcher.h"
#include "Searchable.h"
#include "HeuristicComparator.h"
template <class T>
class HeuristicSearcher:public Searcher<T>{
    virtual string search(Searchable<T>* searchable)=0;
    string backTrace(State<T>* goal, Searchable<T>* toSearch) {
        int rowChild,rowFather,colChild,colFather;
        State<T> *start = toSearch->getInitialState();
        string result = "";
        list<State<T> *> backTraceList;

        while (!goal->equals(start)) {
            string name = goal->getState();
            string parentName = goal->getFather()->getState();

            char *divide = const_cast<char *>(name.c_str());
            rowChild = stoi(strtok(divide, ","));
            colChild = stoi(strtok(NULL, ","));

            char *divideParent = const_cast<char *>(parentName.c_str());
            rowFather = stoi(strtok(divideParent, ","));
            colFather = stoi(strtok(NULL, ","));

            if (rowChild > rowFather) {
                result += "Down";
            } else if (rowChild < rowFather) {
                result += "Up";
            } else if (colChild > colFather) {
                result += "Right";
            } else if (colChild < colFather) {
                result += "Left";
            }

            result += ", ";
            goal = goal->getFather();
        }
        result = result.substr(2);

        return result;
    }
    int getNumberOfNodesEvaluted(){
        return this->numberOfNodesEvaluated;
    }
    double heuristicFunc(State<T>* state, State<T>* goalState) {
        return abs(state->getRow()-goalState->getRow()+ state->getCol()-goalState->getCol());
    }
};
#endif //PROJECT_HEURISTICSEARCHER_H
