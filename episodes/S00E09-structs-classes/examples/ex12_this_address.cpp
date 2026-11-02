// example: ex12_this_address
// purpose: Show that this holds the address of the object that the call uses.
// expect: ok
// in-video: yes
#include <iostream>
struct Point {
    int x = 0;
    Point* address() { return this; }
};
int main() {
    Point a;
    Point b;
    std::cout << std::boolalpha;
    std::cout << (a.address() == &a) << '\n';
    std::cout << (b.address() == &a) << '\n';
}
