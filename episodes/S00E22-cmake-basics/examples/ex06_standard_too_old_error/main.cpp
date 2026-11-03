// example: ex06_standard_too_old_error
// purpose: Show that a C++23 function does not compile when the target asks for C++20 only.
// expect: compile-error
// expect-match: no member named 'contains'
// std: c++20
#include <iostream>
#include <string>

int main() {
    std::string file = "CMakeLists.txt";
    std::cout << file.contains("CMake") << '\n';
}
