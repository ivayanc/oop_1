//
// Created by Ivan Yanchenko on 06.10.2022.
//

#include "Display.h"

Display::Display(char *company, int version, int monitor_size) : company(company), version(version), monitor_size(monitor_size){
    if (!isValid(version, monitor_size))
        throw invalid_argument("Invalid input data for the Display!");
}

bool Display::isValid(int & version, int & monitor_size) {
    if(version <= 0 || monitor_size <= 10 || monitor_size > 88)
        return false;
    return true;
}

Display::Display(Display &display) {
    company = display.company;
    version = display.version;
    monitor_size = display.monitor_size;
}