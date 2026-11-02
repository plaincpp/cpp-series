// example: ex17_unique_closure_type
// purpose: Show that each lambda expression has its own type, but a copy has the same type.
// expect: ok
#include <iostream>
#include <type_traits>

int main() {
    auto first = [](int x) { return x + 1; };
    auto second = [](int x) { return x + 1; };
    auto copy = first;
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(first), decltype(second)> << '\n';
    std::cout << std::is_same_v<decltype(first), decltype(copy)> << '\n';
    std::cout << first(1) + second(1) + copy(1) << '\n';
}
