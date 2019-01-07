//
// Created by bentzirozen on 1/7/19.
//
#include "BFS.h"
//implementation of bfs algorithm
template<class T>
State<T> BFS<T>::search(Searchable<T> *searchable) {
    list<State<T>> in_nodes;
    set<State<T>> out_nodes;
    State<T> cur_node;
    in_nodes.push_back(searchable->getInitialState());
    while (!in_nodes.empty()) {
        cur_node = in_nodes.pop_front();
        out_nodes.insert(cur_node);

        if (cur_node == searchable->getGoalState()) {
            return cur_node;
        }

        for (State<T>& s : searchable->getAllPossibleStates(cur_node)) {
            if (out_nodes.find(s) == out_nodes.end() && find(in_nodes.begin(), in_nodes.end(), s) == in_nodes.end()) {
                s.setParent(cur_node);
                in_nodes.push_back(s);
            }
        }
    }
}

