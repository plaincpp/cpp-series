// example: ex23_int8_prints_char_pitfall
// purpose: Show that std::cout prints an int8_t as a character, and that unary plus prints the number.
// expect: ok
#include <cstdint>
#include <iostream>

int main() {
    std::int8_t level = 65;
    std::cout << level << '\n';
    std::cout << +level << '\n';
    std::cout << int{level} << '\n';
}
