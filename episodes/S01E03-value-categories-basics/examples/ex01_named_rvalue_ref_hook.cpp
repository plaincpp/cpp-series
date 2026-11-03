// example: ex01_named_rvalue_ref_hook
// purpose: Show that a call with a named rvalue reference selects the int& overload.
// expect: ok
// in-video: yes
#include <iostream>

void take(int&)  { std::cout << "int&\n"; }
void take(int&&) { std::cout << "int&&\n"; }

int main() {
    int&& x = 42;
    take(x);
}
