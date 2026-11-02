// example: ex07_empty_if_body_pitfall
// purpose: Show that a semicolon after the if condition makes an empty body. Both compilers warn.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int balance = 50;
    if (balance < 0);
        std::cout << "overdrawn\n";
}
