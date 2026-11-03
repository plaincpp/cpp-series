// example: ex21_virtual_in_constructor
// purpose: Show that a virtual call in a base constructor runs the base version, because the derived part is not ready.
// expect: ok
// in-video: no
#include <iostream>
struct Shape {
    Shape() { std::cout << "constructor: " << name() << '\n'; }
    virtual ~Shape() = default;
    virtual const char* name() const { return "shape"; }
};
struct Circle : Shape {
    const char* name() const override { return "circle"; }
};
int main() {
    Circle circle;
    const Shape& shape = circle;
    std::cout << "after: " << shape.name() << '\n';
}
