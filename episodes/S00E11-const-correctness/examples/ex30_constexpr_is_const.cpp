// example: ex30_constexpr_is_const
// purpose: Show that a constexpr variable has a const type.
// expect: ok
#include <iostream>
#include <type_traits>
constexpr int limit = 10;
int main() {
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(limit), const int> << '\n';
}
