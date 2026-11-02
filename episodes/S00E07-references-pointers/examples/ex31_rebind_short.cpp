// example: ex31_rebind_short
// purpose: Show in a Short that an assignment to a reference changes the referred object.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int& r = a;
    r = b;
    std::cout << a << ' ' << r << '\n';
}
