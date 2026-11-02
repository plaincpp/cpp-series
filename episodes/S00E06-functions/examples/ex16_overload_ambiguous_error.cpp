// example: ex16_overload_ambiguous_error
// purpose: Show that a long argument makes an ambiguous call, because both overloads need a conversion.
// expect: compile-error
// expect-match: ambiguous
// in-video: yes
#include <iostream>

void show(int) { std::cout << "int\n"; }
void show(double) { std::cout << "double\n"; }

int main() {
    long count = 42;
    show(count);
}
