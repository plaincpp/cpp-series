// example: ex27_string_find_substr
// purpose: Use find() and substr() to search text, and compare the result of find() with npos.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>

int main() {
    std::string path = "src/main.cpp";
    auto dot = path.find('.');
    std::cout << dot << '\n';
    std::cout << path.substr(dot + 1) << '\n';
    auto lib = path.find("lib");
    std::cout << std::boolalpha;
    std::cout << (lib == std::string::npos) << '\n';
}
