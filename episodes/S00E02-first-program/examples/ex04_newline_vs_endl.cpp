// example: ex04_newline_vs_endl
// purpose: Show that a newline character and std::endl write the same text.
// expect: ok
#include <iostream>

int main() {
    std::cout << "line 1\n";
    std::cout << "line 2" << '\n';
    std::cout << "line 3" << std::endl;
}
