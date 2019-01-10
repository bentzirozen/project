//
// Created by bentzirozen on 1/7/19.
//

#ifndef PROJECT_DFS_H
#define PROJECT_DFS_H
#include "GraphSearcher.h"

//dfs algorithm - type of graph searcher
template<class T>
class DFS:public GraphSearcher<T>{
    State<T> search(Searchable<T>* searchable){
        template<class T>
        State<T> DFS<T>::search(Searchable<T> *searchable) {
            list<State<T>> in_nodes;
            set<State<T>> out_nodes;
            State<T> cur_node;

            in_nodes.push_back(searchable->getInitialState());
            while (!in_nodes.empty()) {
                cur_node = in_nodes.pop_back();
                out_nodes.insert(cur_node);

                if (cur_node == searchable->getGoalState()) {
                    return cur_node;
                }

                for (State<T>& s : searchable->getAllPossibleStates(cur_node)) {
                    if (out_nodes.find(s)== out_nodes.end() && find(in_nodes.begin(), in_nodes.end(), s) == in_nodes.end()) {
                        s.setFather(cur_node);
                        in_nodes.push_back(s);
                    }
                }
            }
        }
    }
    int getNumberOfNodesEvaluted();
};



#endif //PROJECT_DFS_H
