// example: ex06_call_frames
// purpose: Show three functions whose parameters and local variables live in their own stack frames.
// expect: ok
// in-video: no
#include <iostream>
int square(int value) {
    int result = value * value;
    return result;
}

int sum_of_squares(int a, int b) {
    int total = square(a) + square(b);
    return total;
}

int main() {
    std::cout << sum_of_squares(3, 4) << '\n';
}
