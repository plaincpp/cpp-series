// example: ex17_transitive_static_link
// purpose: Show that CMake adds the libraries of a static library to the link of the executable.
// expect: ok
#include "report.h"
#include <iostream>

int main() {
    std::cout << make_report("CMake builds C++ projects") << '\n';
}
