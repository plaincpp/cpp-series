// example: ex04_vla_pedantic_error
// purpose: Show that an array size from a run-time value is not standard C++ (-Wpedantic finds it).
// expect: compile-error
// expect-match: variable length array
// flags: -Werror
#include <iostream>

int main() {
    int count = 0;
    std::cin >> count;
    int values[count];
    values[0] = 1;
    std::cout << values[0] << '\n';
}
