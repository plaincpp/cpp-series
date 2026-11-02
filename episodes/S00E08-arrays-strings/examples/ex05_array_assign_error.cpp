// example: ex05_array_assign_error
// purpose: Show that you cannot assign one C array to another C array.
// expect: compile-error
// expect-match: array
#include <iostream>

int main() {
    int source[3] = {1, 2, 3};
    int target[3] = {};
    target = source;
    std::cout << target[0] << '\n';
}
