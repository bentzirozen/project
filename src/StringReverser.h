//
// Created by bentzirozen on 1/6/19.
//

#ifndef PROJECT_STRINGREVERSER_H
#define PROJECT_STRINGREVERSER_H

#include "Solver.h"
#include <string>
#include <algorithm>
using namespace std;

class StringReverser:public Solver<string,string>{
public:
    string solve(string problem);

};

#endif //PROJECT_STRINGREVERSER_H
