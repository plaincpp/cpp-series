// example: ex48_or_short_circuit_guard
// purpose: Show that || does not evaluate the division when count is zero.
// expect: ok
// stdin: 0
// in-video: no
#include <iostream>

int main() {
    int total = 90;
    int count = 1;
    std::cin >> count;
    bool alert = count == 0 || total / count > 10;
    std::cout << std::boolalpha << alert << '\n';
}
