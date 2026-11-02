// example: ex29_string_copy_independent
// purpose: Show that a std::string owns its characters, so a copy changes independently.
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string name = "Ada";
    std::string copy = name;
    copy[0] = 'I';
    std::cout << name << ' ' << copy << '\n';
    name = "Grace";
    std::cout << name << ' ' << name.size() << ' ' << copy << '\n';
}
