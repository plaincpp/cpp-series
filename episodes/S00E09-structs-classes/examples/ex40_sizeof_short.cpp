// example: ex40_sizeof_short
// purpose: Show the hook puzzle of ex13 with lines of 40 characters or fewer, for a vertical Short: two int members and two member functions give 8 bytes.
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
    std::cout << sizeof(Point) << '\n';
}
