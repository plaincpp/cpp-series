// example: ex12_missing_break_fixed
// purpose: Show the correction: a break at the end of each case stops the switch.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int place = 2;
    switch (place) {
    case 1:
        std::cout << "gold\n";
        break;
    case 2:
        std::cout << "silver\n";
        break;
    case 3:
        std::cout << "bronze\n";
    }
}
