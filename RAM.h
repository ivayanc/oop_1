//
// Created by Ivan Yanchenko on 06.10.2022.
//

#ifndef OOP_RAM_H
#define OOP_RAM_H

#include <iostream>

using namespace std;

class RAM {
private:
    const char* company;
    int version, ram_size;
public:
    RAM(char* company, int version, int ram_size);
    ~RAM() = default;
    bool isValid(int & version, int & ram_size);
    RAM(RAM &ram);
    friend ostream& operator<<(ostream& os, const RAM* dt);
};


#endif //OOP_RAM_H
