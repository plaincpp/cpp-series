// example: ex04_two_files_fix
// purpose: Put the definition in a second source file, so the linker finds the function.
// expect: ok
#include <iostream>
#include "area.h"
int main() {
    std::cout << area(3, 4) << '\n';
}
