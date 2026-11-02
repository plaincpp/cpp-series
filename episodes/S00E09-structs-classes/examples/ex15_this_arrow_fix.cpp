// example: ex15_this_arrow_fix
// purpose: Use this->x to name the member when a parameter has the same name.
// expect: ok
// in-video: yes
#include <iostream>

struct Point {
    int x = 0;
    void set_x(int x) {
        this->x = x;
    }
};

int main() {
    Point p;
    p.set_x(5);
    std::cout << p.x << '\n';
}
