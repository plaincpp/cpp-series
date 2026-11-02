// example: ex36_literal_plus_fix
// purpose: Make one operand a std::string, or use the s suffix, so that + joins the text.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>

using namespace std::string_literals;

int main() {
    std::string first = std::string("Hello, ") + "world";
    auto second = "Hello, "s + "world";
    std::cout << first << '\n';
    std::cout << second << ' ' << second.size() << '\n';
}
