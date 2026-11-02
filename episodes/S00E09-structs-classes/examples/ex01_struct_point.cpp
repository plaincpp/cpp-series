// example: ex01_struct_point
// purpose: Use a struct to keep two related values together, and use the dot to read and change a member.
// expect: ok
// in-video: yes
#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p{3, 4};
    p.x = 10;
    std::cout << p.x << ' ' << p.y << '\n';
}
