// example: ex06_bool_values
// purpose: Show that a bool holds false or true, that a nonzero int becomes true, and how std::boolalpha prints it.
// expect: ok
#include <iostream>

int main() {
    bool done = false;
    bool ready = 42;
    std::cout << done << ' ' << ready << '\n';
    std::cout << std::boolalpha << done << ' ' << ready << '\n';
}
