// example: ex37_range_for_braced_list
// purpose: Use a range-for loop on a braced list of values.
// expect: ok
#include <initializer_list>
#include <iostream>

int main() {
    int total = 0;
    for (int prime : {2, 3, 5, 7}) {
        total += prime;
    }
    std::cout << total << '\n';
}
