// example: ex05_cplusplus_value
// purpose: Print the value of __cplusplus to show which C++ standard the build uses.
// expect: ok
#include <iostream>

int main() {
    std::cout << "__cplusplus = " << __cplusplus << '\n';
}
