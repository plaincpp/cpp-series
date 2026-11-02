// example: ex11_missing_break_pitfall
// purpose: Show that a case without break falls through and runs the statements of the next cases.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int place = 2;
    switch (place) {
    case 1:
        std::cout << "gold\n";
    case 2:
        std::cout << "silver\n";
    case 3:
        std::cout << "bronze\n";
    }
}
