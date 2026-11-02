// example: ex13_uninitialized_loop
// purpose: Show that GCC finds this uninitialized read only with -O2.
// expect: compile-error
// expect-match: uninitialized
// flags: -O2 -Werror
#include <iostream>

int main() {
    int prices[] = {4, 8, 15};
    int total;
    for (int price : prices) {
        total += price;
    }
    std::cout << "Total: " << total << '\n';
}
