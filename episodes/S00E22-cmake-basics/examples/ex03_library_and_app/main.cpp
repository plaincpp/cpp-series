// example: ex03_library_and_app
// purpose: Build a static library and an executable, and link the executable to the library.
// expect: ok
// in-video: yes
#include "geometry.h"
#include <iostream>

int main() {
    std::cout << "area: " << geometry::area(3, 4) << '\n';
    std::cout << "perimeter: " << geometry::perimeter(3, 4) << '\n';
}
