// example: ex10_const_pointer
// purpose: Show that a const pointer can change its object but always points to the same object.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int score = 10;
    int* const p = &score;
    *p = 15;
    std::cout << score << '\n';
}
