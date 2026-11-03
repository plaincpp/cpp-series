// example: ex08_null_pointer_crash
// purpose: Show a null pointer read that stops the program with a segmentation fault.
// expect: ub
// expect-match: null pointer
// flags: -g -O0
// stdin: 7
// in-video: yes
#include <iostream>

int with_tax(const int* price) {
    return *price + *price / 10;
}

int main() {
    int prices[]{120, 80, 45};
    unsigned id = 0;
    std::cin >> id;
    const int* price = id < 3 ? &prices[id] : nullptr;
    std::cout << with_tax(price) << '\n';
}
