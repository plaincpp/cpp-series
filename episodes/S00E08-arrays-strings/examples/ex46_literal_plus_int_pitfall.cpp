// example: ex46_literal_plus_int_pitfall
// purpose: Show that a string literal plus an int compiles and moves a pointer, so it does not join text.
// expect: ok
#include <iostream>
#include <string>

int main() {
    int count = 7;
    std::cout << "Hello, world" + count << '\n';
    std::cout << "Items: " + std::to_string(count) << '\n';
}
