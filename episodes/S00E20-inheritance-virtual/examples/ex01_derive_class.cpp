// example: ex01_derive_class
// purpose: Show that a derived class gets the data members and the member functions of its base class.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    int x = 0;
    void move(int dx) { x += dx; }
};
struct Square : public Shape {
    int side = 3;
};
int main() {
    Square square;
    square.move(5);
    std::cout << square.x << ' ' << square.side << '\n';
}
