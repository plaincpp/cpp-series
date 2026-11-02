// example: ex17_const_assign_error
// purpose: Show that a const variable cannot change after its initialization.
// expect: compile-error
// expect-match: variable 'max_items'
#include <iostream>

int main() {
    const int max_items = 10;
    max_items = 11;
    std::cout << max_items << '\n';
}
