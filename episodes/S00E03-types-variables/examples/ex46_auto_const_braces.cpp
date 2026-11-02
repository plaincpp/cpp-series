// example: ex46_auto_const_braces
// purpose: Show that auto removes a top-level const from the copy, and that auto with braces and one value gives int.
// expect: ok
// in-video: yes
#include <iostream>
#include <type_traits>

int main() {
    const int limit = 5;
    auto copy = limit;
    auto one{1};
    static_assert(std::is_same_v<decltype(copy), int>);
    static_assert(std::is_same_v<decltype(one), int>);
    copy = copy + 1;
    std::cout << copy << ' ' << one << '\n';
}
