// example: ex23_for_running_total
// purpose: Use a for loop with an init statement, a condition and an increment.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int total = 0;
    for (int i = 1; i <= 4; ++i) {
        total += i;
        std::cout << i << ' ' << total << '\n';
    }
}
