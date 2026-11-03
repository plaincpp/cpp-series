// example: ex02_construction_order
// purpose: Show that the base constructor runs first and the base destructor runs last.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    Shape() { std::cout << "Shape()\n"; }
    ~Shape() { std::cout << "~Shape()\n"; }
};
struct Square : Shape {
    Square() { std::cout << "Square()\n"; }
    ~Square() { std::cout << "~Square()\n"; }
};
int main() {
    Square square;
    std::cout << "use\n";
}
