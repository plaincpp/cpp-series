// example: ex36_bitwise_no_short_circuit
// purpose: Show that & on two bool values evaluates both operands, but && can stop after the left one.
// expect: ok
#include <iostream>

int calls = 0;

bool is_valid(bool result) {
    calls = calls + 1;
    return result;
}

int main() {
    bool logical = is_valid(false) && is_valid(true);
    std::cout << calls << '\n';
    calls = 0;
    bool bitwise = is_valid(false) & is_valid(true);
    std::cout << calls << '\n';
    std::cout << std::boolalpha << logical << ' ' << bitwise << '\n';
}
