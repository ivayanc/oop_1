//
// Created by Ivan Yanchenko on 06.10.2022.
//

#ifndef OOP_CPU_H
#define OOP_CPU_H

#include <iostream>

using namespace std;

class CPU {
private:
    const char* company;
    int version, max_temperature;
public:
    CPU(char* company, int version, int max_temperature);
    ~CPU() = default;
    bool isValid(int & version, int & max_temperature);
    CPU(CPU &cpu);
    friend ostream& operator<<(ostream& os, const CPU* dt);
};


#endif //OOP_CPU_H
