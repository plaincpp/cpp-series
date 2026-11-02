// example: ex03_reference_no_rebind
// purpose: Show that an assignment to a reference copies a value and does not change the referred object.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int first = 1;
    int second = 2;
    int& ref = first;
    ref = second;
    second = 3;
    std::cout << first << ' ' << second << ' ' << ref << '\n';
}
