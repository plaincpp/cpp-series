// example: ex06_conditional_breakpoint
// purpose: Stop in a loop of 1000 items only at the item with a bad value.
// expect: ok
// flags: -g -O0
#include <iostream>
#include <vector>

int main() {
    std::vector<int> readings(1000, 20);
    readings[637] = -40;
    int total = 0;
    for (int i = 0; i < 1000; ++i) {
        int value = readings[i];
        total += value;
    }
    std::cout << "total: " << total << '\n';
}
