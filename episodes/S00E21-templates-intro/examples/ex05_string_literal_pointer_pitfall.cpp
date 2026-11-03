// example: ex05_string_literal_pointer_pitfall
// purpose: Show that two string literals make T a const char pointer, so the less-than operator compares addresses.
// expect: ok
// in-video: no
#include <iostream>
#include <string>
#include <type_traits>
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
int main() {
    using Result = decltype(max_of("pear", "apple"));
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<Result, const char*> << '\n';
    std::string a = "pear";
    std::string b = "apple";
    std::cout << max_of(a, b) << '\n';
}
