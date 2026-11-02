// example: ex47_bitwise_and_guard
// purpose: Show the compiler messages for & in place of && in a division guard. Run only with a count that is not zero.
// expect: ok
// stdin: 5
// in-video: no
#include <iostream>

int main() {
    int total = 90;
    int count = 1;
    std::cin >> count;
    if (count != 0 & total / count > 10) {
        std::cout << "high average\n";
    }
}
