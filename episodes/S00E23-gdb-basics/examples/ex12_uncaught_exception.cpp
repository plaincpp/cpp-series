// example: ex12_uncaught_exception
// purpose: Use catch throw in GDB to find the line that throws an exception that nothing catches.
// expect: runtime-error
// expect-match: terminate called after throwing
// flags: -g -O0
// stdin: -3
#include <iostream>
#include <stdexcept>

int parse_age(int raw) {
    if (raw < 0)
        throw std::invalid_argument("negative age");
    return raw;
}

int main() {
    int raw = 0;
    std::cin >> raw;
    std::cout << parse_age(raw) << '\n';
}
