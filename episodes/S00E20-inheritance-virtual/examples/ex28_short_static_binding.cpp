// example: ex28_short_static_binding
// purpose: Show in a short program that a non-virtual call through a base pointer runs the base version.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
  void draw() { std::cout << "shape"; }
};
struct Circle : Shape {
  void draw() { std::cout << "circle"; }
};
void show(Shape* s) { s->draw(); }
int main() { Circle c; show(&c); }
