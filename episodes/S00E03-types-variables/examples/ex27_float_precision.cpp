// example: ex27_float_precision
// purpose: Show that float cannot store 16777217, but double can.
// expect: ok
// in-video: yes
#include <iomanip>
#include <iostream>

int main() {
    float f = 16'777'216.0f;
    double d = 16'777'216.0;
    f = f + 1.0f;
    d = d + 1.0;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << f << '\n';
    std::cout << d << '\n';
}
