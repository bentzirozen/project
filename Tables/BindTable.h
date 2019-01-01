//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_BINDINGTABLE_H
#define PROJECT_BINDINGTABLE_H

#include <map>

/**
 *holds all the paths for the vars
 */

class BindTable {
    std::map<std::string, std::string> bindTable;
    static BindTable *s_instance;
public:
    static inline BindTable *instance() {
        if (!s_instance){
            s_instance = new BindTable();
        }
        return s_instance;
    }

    /**
    * Set a value in the table
    * @param key key
    * @param val val
    */
    inline void setValue(const std::string &key, const std::string &val) {
        bindTable[key] = val;
    }

    /**
     *
     * @param key key
     * @return table[key]
     */
    inline std::string getValue(const std::string &key) {
        return bindTable[key];
    }
    //check if a key is in the bind table
    inline bool atTable(const std::string &key){
        return bindTable.find(key) != bindTable.end();
    }
};


#endif //PROJECT_BINDINGTABLE_H
