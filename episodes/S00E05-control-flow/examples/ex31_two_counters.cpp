// example: ex31_two_counters
// purpose: Use two counters in one for loop: one goes up and one goes down.
// expect: ok
#include <iostream>

int main() {
    for (int low = 0, high = 5; low < high; ++low, --high) {
        std::cout << low << ' ' << high << '\n';
    }
}
