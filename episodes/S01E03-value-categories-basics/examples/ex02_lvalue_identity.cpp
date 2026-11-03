// example: ex02_lvalue_identity
// purpose: Show that an lvalue names an object, so you can take its address and assign to it; *p and count are the same object.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int count = 5;
    int scores[3] = {7, 8, 9};
    int* p = &count;
    count = 6;
    scores[1] = 10;
    *p = *p + 1;
    std::cout << count << ' ' << scores[1] << '\n';
    std::cout << (&*p == &count) << '\n';
}
