// example: ex06_array_compare_warning
// purpose: Show that == on two C arrays compares addresses, and that C++20 deprecates it.
// expect: compile-error
// expect-match: comparison between two arrays
// flags: -Werror
#include <iostream>

int main() {
    int first[3] = {1, 2, 3};
    int second[3] = {1, 2, 3};
    std::cout << std::boolalpha << (first == second) << '\n';
}
