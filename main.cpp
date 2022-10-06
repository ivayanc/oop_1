#include "Laptop.h"
using namespace std;

int main() {
    CPU test_cpu1("123", 2, 2);
    Display test_disp1("ewq", 2, 24);
    RAM test_ram1("higi", 3, 1025);
    Battery test_battery1("sae", 2, 3601);
    Battery test_battery2("sae2", 2, 8500);
    Laptop laptop1 = Laptop(test_battery1, test_disp1, test_ram1, test_cpu1);
    cout << laptop1 << "\n";
    Laptop laptop2 = laptop1;
    cout << laptop2 << "\n";
    Laptop laptop3 = Laptop(test_battery2, test_disp1, test_ram1, test_cpu1);
    cout << laptop3 << "\n";
    laptop3 = laptop2;
    cout << laptop3 << "\n";
    return 0;
}
