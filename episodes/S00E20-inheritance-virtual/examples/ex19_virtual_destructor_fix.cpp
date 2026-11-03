// example: ex19_virtual_destructor_fix
// purpose: Show that a virtual base destructor makes delete through a base pointer run both destructors.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    virtual ~Shape() { std::cout << "~Shape\n"; }
};
struct Label : Shape {
    ~Label() override { std::cout << "~Label\n"; }
};
int main() {
    Shape* shape = new Label;
    delete shape;
}
