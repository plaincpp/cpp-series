// example: ex31_short_move_copies
// purpose: Show in 10 narrow lines that an empty destructor makes std::move copy (Short 1).
// expect: ok
// in-video: yes
#include <cstdio>
#include <utility>
struct T {
    T() = default;
    T(const T&) { std::puts("copy"); }
    T(T&&) noexcept { std::puts("move"); }
};
struct Widget { T t; ~Widget() {} };
Widget a;
int main() { Widget b = std::move(a); }
