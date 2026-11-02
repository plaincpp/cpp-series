// example: ex30_auto_braces
// purpose: Show that auto with braces deduces int, but auto with = and braces deduces std::initializer_list.
// expect: ok
#include <initializer_list>
#include <iostream>
#include <type_traits>

int main() {
    auto one{1};
    auto list = {1, 2, 3};
    static_assert(std::is_same_v<decltype(one), int>);
    static_assert(std::is_same_v<decltype(list), std::initializer_list<int>>);
    std::cout << one << ' ' << list.size() << '\n';
}
