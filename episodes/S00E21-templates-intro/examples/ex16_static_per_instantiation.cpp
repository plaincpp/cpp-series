// example: ex16_static_per_instantiation
// purpose: Show that each type gets its own function: each copy of max_of has its own static counter.
// expect: ok
// in-video: yes
#include <iostream>
template <typename T>
T max_of(T a, T b) {
    static int calls = 0;
    ++calls;
    std::cout << "call " << calls << ": ";
    return a < b ? b : a;
}
int main() {
    std::cout << max_of(3, 7) << '\n';
    std::cout << max_of(4, 1) << '\n';
    std::cout << max_of(2.5, 1.5) << '\n';
}
