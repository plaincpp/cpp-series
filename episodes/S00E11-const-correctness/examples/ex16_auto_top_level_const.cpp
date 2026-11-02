// example: ex16_auto_top_level_const
// purpose: Show that auto removes a top-level const but keeps the const of the pointed-to type.
// expect: ok
#include <iostream>
#include <type_traits>
int main() {
    const int limit = 100;
    const int* p = &limit;
    auto a = limit;
    auto b = p;
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(a), int> << '\n';
    std::cout << std::is_same_v<decltype(b), const int*> << '\n';
    a = 5;
    std::cout << a << ' ' << *b << '\n';
}
