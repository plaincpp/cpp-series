// example: ex43_float_brace_constant
// purpose: Show that braces accept the double constant 0.1 for a float, because the constant is in the range of float.
// expect: ok
#include <iostream>

int main() {
    float ratio{0.1};
    std::cout << ratio << '\n';
}
