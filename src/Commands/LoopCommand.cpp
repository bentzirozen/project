//
// Created by bentzirozen on 12/22/18.
//



#include "LoopCommand.h"
#include "../Tables/SymbolTable.h"

void LoopCommand::execute(const vector<string> &cur_lex) {
    first_iteration = true;
     int keep_first= index;
     int start_index;
    while(conditionParser.checkCondition(cur_lex)) {
            start_index = index;
            //dont need to get the commands every time is the same so do it only once
            if (first_iteration) {
                commands_in_loop(cur_lex, index);
                index = start_index;
                first_iteration = false;
            }
            for (auto const &command:commands) command->calculate();
            index = keep_first;
        }
    }

void LoopCommand::commands_in_loop(const vector<string> cur_lex, int &index) {
    //erase the all commands that were there
    commands.clear();
    //until while didnt ends
    while (cur_lex[index] != "}") {
        if(cur_lex[index] == "{") {
            index++;
        }
        else if (cur_lex[index] == "var") {
            commands.push_back(command_map["var"]);
            //if it bind to increase in 5 the index
            if (cur_lex[index + 3] == " bind"){
                index += 5;
            }
            //else increase in 4 the index
            else{
                index += 4;
            }
        }
        //if its an assignment increase index in 3
        else if (this->command_map.find(cur_lex[index]) == command_map.end()) {
            commands.push_back(command_map["assign"]);
            index += 3;
            //increase index until if dont end
        } else if (cur_lex[index] == "if") {
            commands.push_back(command_map["if"]);
            while(cur_lex[index]!= "}") index++;
            index++;
        }
        //until while didnt ends increase index
        else if (cur_lex[index] == "while") {
            commands.push_back(command_map["while"]);
            while(cur_lex[index]!= "}") index++;
            index++;
        }
        else if  (this->command_map.find(cur_lex[index]) != command_map.end()) {
            commands.push_back(command_map[cur_lex[index]]);
            index += 2;
        }
    }

}
//all is initialized because its by reference
LoopCommand::LoopCommand(map<string,Expression*>&command_map,int &index) : command_map(command_map),
                                                                index(index),conditionParser(this->index) {


}
