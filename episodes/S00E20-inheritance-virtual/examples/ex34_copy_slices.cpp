// example: ex34_copy_slices
// purpose: Show that a copy into a base object slices, but a base reference keeps the dynamic type.
// expect: ok
// in-video: no
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() const override { std::cout << "circle\n"; }
};
int main() {
    Circle circle;
    Shape copy = circle;
    Shape& ref = circle;
    copy.draw();
    ref.draw();
}
