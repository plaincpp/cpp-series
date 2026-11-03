// example: ex18_missing_source_pitfall
// purpose: Show that CMake stops at the configure step when a source file name in add_executable is wrong.
// expect: ok
#include <iostream>

int main() {
    std::cout << "configure, then build\n";
}
