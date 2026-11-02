// example: ex48_short_missing_break
// purpose: Show a missing break in 10 lines for a Short: place 1 prints two medals.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int place = 1;
    switch (place) {
    case 1:
        std::cout << "gold\n";
    case 2:
        std::cout << "silver\n";
    }
}
