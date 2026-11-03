// example: ex13_shared_library
// purpose: Build a shared library with add_library SHARED and link an executable to it.
// expect: ok
#include "units.h"
#include <iostream>

int main() {
    std::cout << "212 F = " << units::to_celsius(212) << " C\n";
    std::cout << "32 F = " << units::to_celsius(32) << " C\n";
}
