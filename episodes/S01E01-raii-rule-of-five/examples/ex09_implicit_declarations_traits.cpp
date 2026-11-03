// example: ex09_implicit_declarations_traits
// purpose: Use type traits to show which special member functions the compiler gives each class.
// expect: ok
#include <iostream>
#include <string>
#include <type_traits>
struct Plain { std::string name; };
struct WithDtor { std::string name; ~WithDtor() {} };
struct WithMove {
    std::string name;
    WithMove(WithMove&&) = default;
};
template <class T>
void show(const char* label) {
    std::cout << label
              << " default:" << std::is_default_constructible_v<T>
              << " copy:" << std::is_copy_constructible_v<T>
              << " move:" << std::is_move_constructible_v<T>
              << " nothrow-move:" << std::is_nothrow_move_constructible_v<T>
              << '\n';
}
int main() {
    show<Plain>("Plain   ");
    show<WithDtor>("WithDtor");
    show<WithMove>("WithMove");
}
