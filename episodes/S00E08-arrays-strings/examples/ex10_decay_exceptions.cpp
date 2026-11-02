// example: ex10_decay_exceptions
// purpose: Show that sizeof, & and a reference keep the array type, but auto gets a pointer.
// expect: ok
#include <iostream>
#include <type_traits>

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    auto copy = scores;
    auto& same = scores;
    auto whole = &scores;
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(copy), int*> << '\n';
    std::cout << std::is_same_v<decltype(same), int(&)[5]> << '\n';
    std::cout << std::is_same_v<decltype(whole), int(*)[5]> << '\n';
    std::cout << sizeof(copy) << ' ' << sizeof(same) << ' ' << sizeof(*whole) << '\n';
    std::cout << (static_cast<void*>(whole) == static_cast<void*>(copy)) << '\n';
}
