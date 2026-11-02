// example: ex30_string_char_access
// purpose: Show that name[name.size()] is the null character, but at(name.size()) throws.
// expect: ok
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    std::string name = "Ada";
    std::cout << std::boolalpha;
    std::cout << (name[name.size()] == '\0') << '\n';
    try {
        std::cout << name.at(name.size()) << '\n';
    } catch (const std::out_of_range&) {
        std::cout << "out of range\n";
    }
}
