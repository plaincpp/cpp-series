// example: ex02_max_function_template
// purpose: Write one function template max_of and call it with int and double values.
// expect: ok
// in-video: yes
#include <iostream>
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
int main() {
    std::cout << max_of(3, 7) << '\n';
    std::cout << max_of(2.5, 1.5) << '\n';
}
