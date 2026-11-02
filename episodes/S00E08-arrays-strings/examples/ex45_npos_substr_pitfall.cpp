// example: ex45_npos_substr_pitfall
// purpose: Show that find() gives npos when there is no match, and that substr(npos + 1) gives the full text.
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string name = "Makefile";
    auto dot = name.find('.');
    std::cout << std::boolalpha << (dot == std::string::npos) << '\n';
    std::cout << (dot + 1) << '\n';
    std::cout << name.substr(dot + 1) << '\n';
}
