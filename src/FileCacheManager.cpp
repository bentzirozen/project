//
// Created by bentzirozen on 1/2/19.
//

#include "FileCacheManager.h"
#include <iostream>
using namespace std;

template <class Problem,class Solution>

bool FileCacheManager<Problem,Solution>::solution_exist(Problem p) {
    return this->sol_map.find(p) != this->sol_map.end();
}
template <class Problem,class Solution>
Solution FileCacheManager<Problem,Solution>::get_solution(Problem p) {
    return this->sol_map.at(p);
}
template <class Problem,class Solution>
void FileCacheManager<Problem,Solution>::save_solution(Problem p,Solution s) {
    ofstream sol_table(SOL_TABLE, ios::app);
    //insert problem and $ in the end for recognize that problem end
    sol_table << p << "$";
    sol_table << s << endl;
    sol_table.close();
    this->sol_map.insert(pair<Problem,Solution>(p,s));

}

template<class Problem, class Solution>
FileCacheManager<Problem, Solution>::FileCacheManager() {
    load_sol_table();
}

template<class Problem, class Solution>
void FileCacheManager<Problem, Solution>::load_sol_table() {
    string solution,problem,line;
    fstream table;
    table.open(SOL_TABLE, fstream::in | fstream::out | fstream::app);
    if (!table.good()) {
        perror("can't open the file");
        exit(1);
    }
    if(!table.eof()) {
        line;
        while (getline(table, line)) {
            //check if there is $
            size_t pos = line.find("$");
            problem = line.substr(0, pos);
            solution = line.substr(pos + 1, line.length() - 1);
            this->sol_map.insert(pair<Problem,Solution>(problem,solution));
        }
    }
}

template class FileCacheManager<string,string>;

