//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_PATHSTABLE_H
#define PROJECT_PATHSTABLE_H

#include "map"
//hold assign paths of values
class PathsTable {
    std::map<std::string, double> pathTable;
    static PathsTable *s_instance;
public:
    static inline PathsTable *instance() {
        if (!s_instance) s_instance = new PathsTable();
        return s_instance;
    }

    /**
     * Set a value in the table
     * @param key key
     * @param val val
     */
    inline void setValue(const std::string &key, double val) {
        pathTable[key] = val;
    }

    /**
     *
     * @param key key
     * @return table[key]
     */
    inline double getValue(const std::string &key) {
        return pathTable[key];
    }

    /**
     * @param key key
     * @return true if table[key] exists, else false
     */
    inline bool atTable(const std::string &key) {
        return pathTable.find(key) != pathTable.end();
    }
};
#endif //PROJECT_PATHSTABLE_H
