// example: ex11_private_include_pitfall
// purpose: Show that a PRIVATE include folder of a library is not visible to the code that links to it.
// expect: compile-error
// expect-match: geometry.h
#include "geometry.h"
#include <iostream>

int main() {
    std::cout << "area: " << geometry::area(3, 4) << '\n';
}
