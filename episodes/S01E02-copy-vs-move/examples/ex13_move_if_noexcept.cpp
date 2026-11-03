// example: ex13_move_if_noexcept
// purpose: Show that std::move_if_noexcept copies when the move can throw, and moves when it cannot.
// expect: ok
#include <iostream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>
struct Throwing {
    Throwing() = default;
    Throwing(const Throwing&) { std::cout << "copy\n"; }
    Throwing(Throwing&&) { std::cout << "move\n"; }
    ~Throwing() {}
};
struct Safe {
    Safe() = default;
    Safe(const Safe&) { std::cout << "copy\n"; }
    Safe(Safe&&) noexcept { std::cout << "move\n"; }
    ~Safe() {}
};
int main() {
    Throwing t;
    Safe s;
    Throwing t2 = std::move_if_noexcept(t);
    Safe s2 = std::move_if_noexcept(s);
    std::cout << std::boolalpha
              << std::is_nothrow_move_constructible_v<Throwing> << ' '
              << std::is_nothrow_move_constructible_v<Safe> << ' '
              << std::is_nothrow_move_constructible_v<std::string> << ' '
              << std::is_nothrow_move_constructible_v<std::vector<int>> << '\n';
}
