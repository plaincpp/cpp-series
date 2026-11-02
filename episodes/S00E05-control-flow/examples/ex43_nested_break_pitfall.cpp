// example: ex43_nested_break_pitfall
// purpose: Show that break in an inner loop stops only the inner loop.
// expect: ok
#include <iostream>

int main() {
    for (int a = 1; a <= 4; ++a) {
        for (int b = 1; b <= 4; ++b) {
            if (a * b == 6) {
                std::cout << a << " x " << b << '\n';
                break;
            }
        }
    }
    std::cout << "end\n";
}
