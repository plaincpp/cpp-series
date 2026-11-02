// example: ex01_reference_alias
// purpose: Show that a reference is another name for an object, with the same address.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int score = 10;
    int& alias = score;
    alias = 25;
    std::cout << score << '\n';
    std::cout << alias << '\n';
    std::cout << std::boolalpha << (&alias == &score) << '\n';
}
