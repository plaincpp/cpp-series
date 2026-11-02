// example: ex08_char_signedness
// purpose: Show that plain char is signed on x86-64 Linux, and that char and signed char are different types.
// expect: ok
#include <iostream>
#include <limits>
#include <type_traits>

int main() {
    std::cout << std::boolalpha;
    std::cout << "char is signed: " << std::is_signed_v<char> << '\n';
    std::cout << "char min: " << int{std::numeric_limits<char>::min()} << '\n';
    std::cout << "char max: " << int{std::numeric_limits<char>::max()} << '\n';
    std::cout << "same as signed char: " << std::is_same_v<char, signed char> << '\n';
}
