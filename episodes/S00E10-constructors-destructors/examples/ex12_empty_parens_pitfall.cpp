// example: ex12_empty_parens_pitfall
// purpose: Show that empty parentheses declare a function, so no object is made and no constructor runs.
// expect: ok
// in-video: yes
#include <iostream>
struct Tag {
    Tag() { std::cout << "make tag\n"; }
};
int main() {
    Tag t();
    Tag u{};
    std::cout << "end of main\n";
}
