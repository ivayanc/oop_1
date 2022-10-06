//
// Created by Ivan Yanchenko on 06.10.2022.
//

#include "Battery.h"

Battery::Battery(char *company, int version, int alive_time) : company(company), version(version), alive_time(alive_time){
    if (!isValid(version, alive_time))
        throw invalid_argument("Invalid input data for the Battery!");
}

bool Battery::isValid(int & version, int & alive_time) {
    if(version <= 0 || alive_time <= 3600 || alive_time > 360000)
        return false;
    return true;
}

Battery::Battery(Battery &battery) {
    company = battery.company;
    version = battery.version;
    alive_time = battery.alive_time;
}