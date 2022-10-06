//
// Created by Ivan Yanchenko on 06.10.2022.
//

#ifndef OOP_BATTERY_H
#define OOP_BATTERY_H

#include <iostream>

using namespace std;

class Battery {
private:
    const char* company;
    int version, alive_time;
public:
    Battery(char* company, int version, int alive_time);
    ~Battery() = default;
    bool isValid(int & version, int & alive_time);
    Battery(Battery &battery);
};


#endif //OOP_BATTERY_H
