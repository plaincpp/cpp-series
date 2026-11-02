// example: ex34_literal_type
// purpose: Show that "cat" is an array of 4 const char, and that a char array gets a copy.
// expect: ok
// in-video: yes
#include <iostream>
#include <type_traits>

int main() {
    std::cout << sizeof("cat") << '\n';
    using T = decltype("cat");
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<T, const char(&)[4]> << '\n';
    char word[] = "cat";
    word[0] = 'b';
    std::cout << word << ' ' << sizeof(word) << '\n';
}
