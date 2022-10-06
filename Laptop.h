//
// Created by Ivan Yanchenko on 06.10.2022.
//

#ifndef OOP_LAPTOP_H
#define OOP_LAPTOP_H

#include "Battery.h"
#include "Display.h"
#include "RAM.h"
#include "CPU.h"

using namespace std;

class Laptop {
private:
    Battery* battery;
    Display* display;
    RAM* ram;
    CPU* cpu;
public:
    Laptop(Battery & battery, Display & display, RAM & ram, CPU & cpu);
    Laptop& operator=(const Laptop& other);
    friend ostream& operator<<(ostream& os, const Laptop& dt);
};


#endif //OOP_LAPTOP_H
