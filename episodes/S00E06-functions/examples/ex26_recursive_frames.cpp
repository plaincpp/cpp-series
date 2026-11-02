// example: ex26_recursive_frames
// purpose: Show that each recursive call gets a new frame, and the last call returns first.
// expect: ok
// in-video: yes
#include <iostream>

int factorial(int n) {
    std::cout << "call " << n << '\n';
    int result = 1;
    if (n > 1) result = n * factorial(n - 1);
    std::cout << "return " << result << '\n';
    return result;
}

int main() {
    std::cout << factorial(3) << '\n';
}
