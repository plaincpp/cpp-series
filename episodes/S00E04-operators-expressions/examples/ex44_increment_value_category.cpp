// example: ex44_increment_value_category
// purpose: Prove that ++i gives the variable itself, but i++ gives a copy of the old value.
// expect: ok
// in-video: yes
#include <iostream>
#include <type_traits>

int main() {
    int i = 5;
    static_assert(std::is_same_v<decltype(++i), int&>);
    static_assert(std::is_same_v<decltype(i++), int>);
    ++i = 10;
    std::cout << i << '\n';
}
