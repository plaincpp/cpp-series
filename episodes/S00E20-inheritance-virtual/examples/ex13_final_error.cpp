// example: ex13_final_error
// purpose: Show that a derived class cannot override a function that its base marks final.
// expect: compile-error
// expect-match: final
// in-video: no
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() const final { std::cout << "circle\n"; }
};
struct Ring : Circle {
    void draw() const override { std::cout << "ring\n"; }
};
int main() {
    Ring ring;
    ring.draw();
}
