// example: ex08_virtual_call
// purpose: Show that a call to a virtual function through a base pointer runs the version of the real object.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() const override { std::cout << "circle\n"; }
};
int main() {
    Circle circle;
    circle.draw();
    Shape* shape = &circle;
    shape->draw();
}
