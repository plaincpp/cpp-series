// example: ex13_value_and_rvalue_ambiguous_error
// purpose: Show that overloads f(int) and f(int&&) make a call with an rvalue ambiguous.
// expect: compile-error
// expect-match: ambiguous
#include <iostream>

void store(int)   { std::cout << "by value\n"; }
void store(int&&) { std::cout << "by rvalue reference\n"; }

int main() {
    int count = 5;
    store(count);
    store(42);
}
