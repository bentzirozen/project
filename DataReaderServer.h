//
// Created by bentzirozen on 12/18/18.
//

#ifndef PROJECT_DATAREADERSERVER_H
#define PROJECT_DATAREADERSERVER_H

#include "OpenServerCommand.h"
#include "MapDB.h"

using namespace std;
#define PARAMETERS_SIZE 23
#define BUFFER_SIZE 2048
static std::vector<std::string> pathsVec{"/instrumentation/airspeed-indicator/indicated-speed-kt",
                                         "/instrumentation/altimeter/indicated-altitude-ft",
                                         "/instrumentation/altimeter/pressure-alt-ft",
                                         "/instrumentation/attitude-indicator/indicated-pitch-deg",
                                         "/instrumentation/attitude-indicator/indicated-roll-deg",
                                         "/instrumentation/attitude-indicator/internal-pitch-deg",
                                         "/instrumentation/attitude-indicator/internal-roll-deg",
                                         "/instrumentation/encoder/indicated-altitude-ft",
                                         "/instrumentation/encoder/pressure-alt-ft",
                                         "/instrumentation/gps/indicated-altitude-ft",
                                         "/instrumentation/gps/indicated-ground-speed-kt",
                                         "/instrumentation/gps/indicated-vertical-speed",
                                         "/instrumentation/heading-indicator/indicated-heading-deg",
                                         "/instrumentation/magnetic-compass/indicated-heading-deg",
                                         "/instrumentation/slip-skid-ball/indicated-slip-skid",
                                         "/instrumentation/turn-indicator/indicated-turn-rate",
                                         "/instrumentation/vertical-speed-indicator/indicated-speed-fpm",
                                         "/controls/flight/aileron",
                                         "/controls/flight/elevator",
                                         "/controls/flight/rudder",
                                         "/controls/flight/flaps",
                                         "/controls/engines/engine/throttle",
                                         "/engines/engine/rpm"};
class DataReaderServer {
    static bool isOpen;
    MapDB &db;
public:
     void updatePathsTable(std::vector<std::string> vec);
     void updateSymbolTable();
     std::vector<std::string> splitByComma(const char *buffer);
     void openServer(int port, int freq);
   DataReaderServer(MapDB& db):db(db){};
    inline static bool serverIsOpen(){
        return isOpen;
    }
    DataReaderServer();
};


#endif //PROJECT_DATAREADERSERVER_H
