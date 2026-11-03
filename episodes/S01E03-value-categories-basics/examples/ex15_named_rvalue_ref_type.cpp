// example: ex15_named_rvalue_ref_type
// purpose: Show that x has the declared type int&&, but the expression x is an lvalue.
// expect: ok
// in-video: yes
#include <iostream>
#include <type_traits>
#include <utility>

void kind(int&)  { std::cout << "lvalue\n"; }
void kind(int&&) { std::cout << "rvalue\n"; }

int main() {
    int&& x = 42;
    static_assert(std::is_same_v<decltype(x), int&&>);
    kind(x);
    kind(std::move(x));
}
