// example: ex13_sizeof_member_functions
// purpose: Show that member functions add no bytes to an object (x86-64 Linux, 4-byte int).
// expect: ok
// in-video: yes
#include <iostream>
struct Point {
    int x = 0;
    int y = 0;
    void move_right() { x += 1; }
    void move_up() { y += 1; }
};
int main() {
    std::cout << sizeof(int) << ' ' << sizeof(Point) << '\n';
}
