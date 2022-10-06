#include "Laptop.h"
using namespace std;

int main() {
    CPU test("123", 2, 2);
    Display test_disp("asos", 2, 24);
    RAM test_ram("higi", 3, 1025);
    Battery test_battery("huawey", 2, 3601);
    Laptop laptop = Laptop(test_battery, test_disp, test_ram, test);
    cout << laptop;
    return 0;
}
