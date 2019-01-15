//
// Created by bentzirozen on 1/2/19.
//

#ifndef PROJECT_FILECACHEMANAGER_H
#define PROJECT_FILECACHEMANAGER_H

#include "CacheManager.h"
#include <vector>
#include <map>
#include <string.h>
#include <mutex>
using namespace std;
template<class Problem,class Solution>
class FileCacheManager:public CacheManager<Problem,Solution>{
    map<string,string> sol_map;
    mutex mtx;
public:
    FileCacheManager(){
        load_sol_table();
    }
    bool solution_exist(string p){
        lock_guard<mutex> lock(this->mtx);
        return this->sol_map.find(p) != this->sol_map.end();
    }
    Solution get_solution(Problem p){
        lock_guard<mutex> lock(this->mtx);
        return this->sol_map.at(p);
    }
    void save_solution(Problem p,Solution s){
        ofstream sol_table(SOL_TABLE, ios::app);
        //insert problem and $ in the end for recognize that problem end
        sol_table << p ;
        sol_table << "$";
        sol_table << s;
        sol_table <<"\n";
        sol_table.close();
        this->sol_map.insert(pair<Problem,Solution>(p,s));
    }
    void load_sol_table() {
        fstream table;
        table.open(SOL_TABLE, fstream::in | fstream::out | fstream::app);
        string line;
        string problem = "";
        string solution = "";
        char p;
        string s;
        char* c;
        //open the file
        if(table.is_open()){
            //get the text by lines
            while (getline(table, line)){
                s="";
                while(line[0]!='$') {
                for(int i=0;i<line.size();i++){
                    p = line[i];
                    if(isdigit(p)||isalpha(p)||p==','||p=='-'){
                        s+=p;
                    }else{
                        cout<<"you were right"<<endl;
                    }
                }
                problem += s;
                problem+="\n";
                s="";
                getline(table,line);
                }
                c = const_cast<char *>(line.c_str());
                c = strtok(c, "$");
                solution += c;
                this->sol_map.insert(pair<string, string>(problem, solution));
                problem="";
                solution="";
            }
            //close file
            table.close();
        }
    }
};

#endif //PROJECT_FILECACHEMANAGER_H
