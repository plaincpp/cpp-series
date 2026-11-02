// example: ex03_struct_copy
// purpose: Show that a copy of a struct copies every member, and a change to the copy does not change the original.
// expect: ok
#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point a{1, 2};
    Point b = a;
    b.x = 9;
    std::cout << "a: " << a.x << ' ' << a.y << '\n';
    std::cout << "b: " << b.x << ' ' << b.y << '\n';
}
