//
// Created by Ivan Yanchenko on 06.10.2022.
//

#ifndef OOP_DISPLAY_H
#define OOP_DISPLAY_H

#include <iostream>

using namespace std;

class Display {
private:
    const char* company;
    int version, monitor_size;
public:
    Display(char* company, int version, int monitor_size);
    ~Display() = default;
    bool isValid(int & version, int & monitor_size);
    Display(Display &display);
    friend ostream& operator<<(ostream& os, const Display* dt);
};


#endif //OOP_DISPLAY_H
