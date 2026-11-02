// example: ex16_closure_size
// purpose: Show the size of closure objects on x86-64 Linux: the captures are data members.
// expect: ok
#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    double d = 0.5;
    auto none = []() { return 0; };
    auto one_int = [a]() { return a; };
    auto two_ints = [a, b]() { return a + b; };
    auto int_double = [a, d]() { return a + d; };
    auto all_by_copy = [=]() { return a; };
    auto by_ref = [&a]() { return a; };
    std::cout << sizeof(none) << '\n';
    std::cout << sizeof(one_int) << '\n';
    std::cout << sizeof(two_ints) << '\n';
    std::cout << sizeof(int_double) << '\n';
    std::cout << sizeof(all_by_copy) << '\n';
    std::cout << sizeof(by_ref) << '\n';
}
