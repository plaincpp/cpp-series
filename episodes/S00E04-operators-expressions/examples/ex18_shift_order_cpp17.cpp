// example: ex18_shift_order_cpp17
// purpose: Show that from C++17, the program evaluates the left operand of << before the right operand.
// expect: ok
#include <iostream>

int counter = 0;

int next_id() {
    counter = counter + 1;
    return counter;
}

int main() {
    std::cout << next_id() << ' ' << next_id() << ' ' << next_id() << '\n';
}
