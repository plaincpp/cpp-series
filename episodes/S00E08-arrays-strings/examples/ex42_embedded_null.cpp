// example: ex42_embedded_null
// purpose: Show that a std::string made from a char pointer stops at the first null character.
// expect: ok
#include <iostream>
#include <string>

using namespace std::string_literals;

int main() {
    std::string from_pointer = "ab\0cd";
    std::string with_count("ab\0cd", 5);
    auto with_suffix = "ab\0cd"s;
    std::cout << sizeof("ab\0cd") << '\n';
    std::cout << from_pointer.size() << ' ' << with_count.size() << ' ' << with_suffix.size() << '\n';
}
