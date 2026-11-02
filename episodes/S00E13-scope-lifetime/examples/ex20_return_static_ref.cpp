// example: ex20_return_static_ref
// purpose: Show that a returned reference to a static local variable stays valid.
// expect: ok
#include <iostream>
#include <string>

const std::string& default_name() {
    static const std::string name = "guest";
    return name;
}

int main() {
    const std::string& first = default_name();
    const std::string& second = default_name();
    std::cout << first << '\n';
    std::cout << std::boolalpha << (&first == &second) << '\n';
}
