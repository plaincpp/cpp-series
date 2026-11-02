// example: ex14_missing_return_ub
// purpose: Show that a function that ends without return is undefined behavior.
// expect: ub
// expect-match: end of a value-returning function
// stdin: 0
// in-video: yes
#include <iostream>

int sign(int value) {
    if (value > 0) return 1;
    if (value < 0) return -1;
}

int main() {
    int value = 0;
    std::cin >> value;
    std::cout << sign(value) << '\n';
}
