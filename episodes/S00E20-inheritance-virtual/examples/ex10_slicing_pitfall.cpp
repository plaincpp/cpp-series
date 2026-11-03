// example: ex10_slicing_pitfall
// purpose: Show that a base parameter by value copies only the base part, so the virtual call runs the base version.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() const override { std::cout << "circle\n"; }
};
void by_value(Shape shape) { shape.draw(); }
void by_reference(const Shape& shape) { shape.draw(); }
int main() {
    Circle circle;
    by_value(circle);
    by_reference(circle);
}
