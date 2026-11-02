// example: ex13_fallthrough_attribute
// purpose: Use [[fallthrough]] to show an intentional fall through. The compiler does not warn.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int level = 2;
    switch (level) {
    case 3:
        std::cout << "copy logs\n";
        [[fallthrough]];
    case 2:
        std::cout << "copy data\n";
        [[fallthrough]];
    case 1:
        std::cout << "copy settings\n";
    }
}
