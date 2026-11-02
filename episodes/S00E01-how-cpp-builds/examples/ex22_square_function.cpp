// example: ex22_square_function
// purpose: Show that a function gets the value of its argument, so square(2 + 3) gives 25.
// expect: ok
// in-video: yes
#include <iostream>

int square(int x) { return x * x; }

int main() {
    std::cout << square(2 + 3) << '\n';
}
