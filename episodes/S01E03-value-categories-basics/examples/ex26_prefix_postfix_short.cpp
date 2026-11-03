// example: ex26_prefix_postfix_short
// purpose: Show in a Short that ++n is an lvalue and n++ is an rvalue.
// expect: ok
// in-video: yes
#include <iostream>

void kind(int&)  { std::cout << "lvalue\n"; }
void kind(int&&) { std::cout << "rvalue\n"; }

int main() {
    int n = 0;
    kind(++n);
    kind(n++);
}
