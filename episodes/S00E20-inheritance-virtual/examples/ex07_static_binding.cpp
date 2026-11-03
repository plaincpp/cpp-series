// example: ex07_static_binding
// purpose: Show that a call to a non-virtual function through a base pointer runs the base version.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() const { std::cout << "circle\n"; }
};
int main() {
    Circle circle;
    circle.draw();
    Shape* shape = &circle;
    shape->draw();
}
