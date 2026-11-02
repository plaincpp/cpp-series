// example: ex44_nested_break_flag
// purpose: Use a bool flag in the outer condition to stop two nested loops.
// expect: ok
#include <iostream>

int main() {
    bool found = false;
    for (int a = 1; a <= 4 && !found; ++a) {
        for (int b = 1; b <= 4; ++b) {
            if (a * b == 6) {
                std::cout << a << " x " << b << '\n';
                found = true;
                break;
            }
        }
    }
    std::cout << "end\n";
}
