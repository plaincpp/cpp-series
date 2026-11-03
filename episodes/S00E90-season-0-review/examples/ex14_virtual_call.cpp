// example: ex14_virtual_call
// purpose: Compare a virtual call and a non-virtual call through a base class reference.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    virtual const char* name() const { return "shape"; }
    const char* kind() const { return "shape"; }
};
struct Circle : Shape {
    const char* name() const override { return "circle"; }
    const char* kind() const { return "circle"; }
};
int main() {
    Circle circle;
    const Shape& base = circle;
    std::cout << base.name() << ' ' << base.kind() << '\n';
}
