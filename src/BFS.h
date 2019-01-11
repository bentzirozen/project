//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_BFS_H
#define PROJECT_BFS_H
#include "GraphSearcher.h"

//bfs algorithm - type of graph searcher
template<class T>
class BFS:public GraphSearcher<T>{
public:

    BFS(){};
    string search(Searchable<T>* searchable){
        list<State<T>*> open;  // will be treated as a stack
        set<State<T>*> close;
        State<T>* current;

        open.push_back(searchable->getInitialState());
        while (!open.empty()) {
            current = open.front();
            open.pop_front();
            close.insert(current);

            if (current == searchable->getGoalState()) {
                return backTrace(current,searchable);
            }

            for (State<T>*& s : searchable->getAllPossibleStates(current)) {
                if (close.find(s) == close.end() && find(open.begin(), open.end(), s) == open.end()) {
                    s->setFather(current);
                    open.push_back(s);
                }
            }
        }
    }
    string backTrace(State<T>* goal, Searchable<T>* toSearch) {
        State<T> *start = toSearch->getInitialState();
        string result = "";
        list<State<T> *> backTraceList;

        while (!goal->equals(start)) {
            string name = goal->getState();
            string parentName = goal->getFather()->getState();

            char *divide = const_cast<char *>(name.c_str());
            int childI = stoi(strtok(divide, ","));
            int childJ = stoi(strtok(NULL, ","));

            char *divideParent = const_cast<char *>(parentName.c_str());
            int parentI = stoi(strtok(divideParent, ","));
            int parentJ = stoi(strtok(NULL, ","));

            if (childI > parentI) {
                result = "Down" + result;
            } else if (childI < parentI) {
                result = "Up" + result;
            } else if (childJ > parentJ) {
                result = "Right" + result;
            } else if (childJ < parentJ) {
                result = "Left" + result;
            }

            result = ", " + result;

            goal = goal->getFather();
        }

        result = result.substr(2);

        return result;
    }

    int getNumberOfNodesEvaluted(){
        return 8;
    }
};



#endif //PROJECT_BFS_H
