// example: ex40_literal_compare_werror
// purpose: Show that == between a const char* and a literal compares addresses, and both compilers warn.
// expect: compile-error
// expect-match: string literal
// flags: -Werror
#include <iostream>
#include <string>

int main() {
    std::string answer;
    std::cin >> answer;
    const char* text = answer.c_str();
    std::cout << std::boolalpha << (text == "yes") << '\n';
}
