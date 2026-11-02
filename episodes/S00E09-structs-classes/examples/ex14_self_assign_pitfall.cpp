// example: ex14_self_assign_pitfall
// purpose: Show that a parameter with the name of a member hides the member, so x = x changes nothing.
// expect: ok
// in-video: yes
#include <iostream>

struct Point {
    int x = 0;
    void set_x(int x) {
        x = x;
    }
};

int main() {
    Point p;
    p.set_x(5);
    std::cout << p.x << '\n';
}
