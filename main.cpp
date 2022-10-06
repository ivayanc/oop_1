#include <iostream>
#include "CPU.h"
#include "Display.h"
#include "RAM.h"
#include "Battery.h"

using namespace std;

int main() {
    CPU test("123", 2, 2);
    Display test_disp("asos", 2, 24);
    RAM test_ram("higi", 3, 1025);
    Battery test_battery("huawey", 2, 3601);
    return 0;
}
