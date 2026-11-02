// example: ex17_define_outside_class
// purpose: Declare member functions in the struct, and define them outside with the name Point:: in front.
// expect: ok
#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
    void move_by(int dx, int dy);
    void print() const;
};

void Point::move_by(int dx, int dy) {
    x += dx;
    y += dy;
}

void Point::print() const {
    std::cout << '(' << x << ", " << y << ")\n";
}

int main() {
    Point p;
    p.move_by(2, 5);
    p.print();
}
