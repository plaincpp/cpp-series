// example: ex31_string_starts_contains
// purpose: Use starts_with and ends_with (C++20) and contains (C++23) to test text.
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string path = "src/main.cpp";
    std::cout << std::boolalpha;
    std::cout << path.starts_with("src/") << '\n';
    std::cout << path.ends_with(".cpp") << '\n';
    std::cout << path.contains("main") << '\n';
    std::cout << path.contains('x') << '\n';
}
