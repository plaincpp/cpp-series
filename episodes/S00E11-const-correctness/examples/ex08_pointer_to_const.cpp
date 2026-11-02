// example: ex08_pointer_to_const
// purpose: Show that a pointer to const can move to a different object but cannot change the object.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int score = 10;
    int bonus = 20;
    const int* p = &score;
    std::cout << *p << '\n';
    p = &bonus;
    std::cout << *p << '\n';
    bonus = 25;
    std::cout << *p << '\n';
}
