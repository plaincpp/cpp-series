// example: ex18_function_pointer
// purpose: Show that a lambda with no captures converts to a function pointer.
// expect: ok
#include <iostream>

int apply(int (*operation)(int), int value) {
    return operation(value);
}

int main() {
    int (*twice)(int) = [](int x) { return x * 2; };
    std::cout << twice(5) << '\n';
    std::cout << apply([](int x) { return x * x; }, 4) << '\n';
}
