// example: ex22_this_in_const_member
// purpose: Prove that this has the type const Point* in a const member function.
// expect: ok
#include <iostream>
#include <type_traits>
struct Point {
    int x = 0;
    void move() {
        static_assert(std::is_same_v<decltype(this), Point*>);
        x += 1;
    }
    void show() const {
        static_assert(std::is_same_v<decltype(this), const Point*>);
        std::cout << x << '\n';
    }
};
int main() {
    Point p;
    p.move();
    p.show();
}
