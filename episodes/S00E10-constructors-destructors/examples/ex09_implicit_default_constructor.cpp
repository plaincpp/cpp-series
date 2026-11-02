// example: ex09_implicit_default_constructor
// purpose: Show that the compiler writes a default constructor for a class with no constructors.
// expect: ok
#include <iostream>
#include <string>
struct Settings {
    std::string name = "guest";
    std::string theme;
    int volume = 5;
};
int main() {
    Settings s;
    std::cout << s.name << ' ' << s.theme.size() << ' ' << s.volume << '\n';
}
