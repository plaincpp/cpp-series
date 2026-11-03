// example: ex04_explicit_template_argument
// purpose: Give the template argument in angle brackets, so the compiler converts 3 to double.
// expect: ok
// in-video: yes
#include <iostream>
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
int main() {
    std::cout << max_of<double>(3, 2.5) << '\n';
    std::cout << max_of(static_cast<double>(3), 2.5) << '\n';
    std::cout << max_of<int>(3, 7) << '\n';
}
