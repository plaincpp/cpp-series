// example: ex36_pointer_to_const_short
// purpose: Show that a pointer to const does not make the object const.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int score = 10;
    const int* view = &score;
    score = 99;
    std::cout << *view << '\n';
}
