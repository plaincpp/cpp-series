// example: ex27_widen_before_multiply
// purpose: Convert one operand to long long before the multiplication, so no overflow occurs.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int width = 50000;
    long long area = static_cast<long long>(width) * width;
    std::cout << area << '\n';
}
