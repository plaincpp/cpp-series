// example: ex32_short_circuit_guard
// purpose: Use && so that the division runs only when count is not zero.
// expect: ok
// stdin: 0
// in-video: yes
#include <iostream>

int main() {
    int total = 90;
    int count = 1;
    std::cin >> count;
    if (count != 0 && total / count > 10) {
        std::cout << "high average\n";
    } else {
        std::cout << "no high average\n";
    }
}
