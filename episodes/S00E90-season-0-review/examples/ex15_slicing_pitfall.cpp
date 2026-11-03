// example: ex15_slicing_pitfall
// purpose: Show that a base class parameter by value slices the object, so the virtual call goes to the base.
// expect: ok
#include <iostream>
struct Shape {
    virtual const char* name() const { return "shape"; }
};
struct Circle : Shape {
    const char* name() const override { return "circle"; }
};
void show_copy(Shape shape) {
    std::cout << shape.name() << '\n';
}
void show(const Shape& shape) {
    std::cout << shape.name() << '\n';
}
int main() {
    Circle circle;
    show_copy(circle);
    show(circle);
}
