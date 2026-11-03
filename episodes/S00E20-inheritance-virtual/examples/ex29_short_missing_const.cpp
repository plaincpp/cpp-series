// example: ex29_short_missing_const
// purpose: Show in a short program that a missing const makes a new function, not an override.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
  virtual void draw() const
  { std::cout << "shape"; }
};
struct Circle : Shape {
  void draw() { std::cout << "circle"; }
};
void show(const Shape& s) { s.draw(); }
int main() { show(Circle{}); }
