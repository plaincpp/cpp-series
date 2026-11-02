// example: ex07_early_return
// purpose: Show that return stops the function at once and gives the value to the caller.
// expect: ok
// in-video: yes
#include <iostream>

int clamp_percent(int value) {
    if (value < 0) return 0;
    if (value > 100) return 100;
    return value;
}

int main() {
    std::cout << clamp_percent(-5) << '\n';
    std::cout << clamp_percent(42) << '\n';
    std::cout << clamp_percent(130) << '\n';
}
