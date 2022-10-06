//
// Created by Ivan Yanchenko on 06.10.2022.
//

#include "Laptop.h"

Laptop::Laptop(Battery &battery, Display &display, RAM &ram, CPU &cpu): battery(&battery), display(&display), ram(&ram), cpu(&cpu){}

Laptop& Laptop::operator=(const Laptop &other) {
    if(this == &other)
        return *this;
    battery = other.battery;
    display = other.display;
    ram = other.ram;
    cpu = other.cpu;
    return *this;
}

ostream &operator<<(ostream &os, const Laptop &dt) {
    os << "Laptop:\n\t" << dt.battery << "\n\t" << dt.display  << "\n\t" << dt.ram << "\n\t" << dt.cpu;
    return os;
};