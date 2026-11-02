// example: ex22_switch_jump_table
// purpose: Show a dense switch that the compilers change into a table with -O2.
// expect: ok
// stdin: 3
#include <iostream>

int main() {
    int day = 0;
    std::cin >> day;
    switch (day) {
    case 0:
        std::cout << "Mon\n";
        break;
    case 1:
        std::cout << "Tue\n";
        break;
    case 2:
        std::cout << "Wed\n";
        break;
    case 3:
        std::cout << "Thu\n";
        break;
    case 4:
        std::cout << "Fri\n";
        break;
    case 5:
        std::cout << "Sat\n";
        break;
    default:
        std::cout << "Sun\n";
    }
}
