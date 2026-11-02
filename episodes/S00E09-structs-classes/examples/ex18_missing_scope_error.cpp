// example: ex18_missing_scope_error
// purpose: Show that a definition without Point:: makes a free function, and the compiler rejects its const.
// expect: compile-error
// expect-match: non-member function
#include <iostream>

struct Point {
    int x = 0;
    void print() const;
};

void print() const {
    std::cout << x << '\n';
}

int main() {
    Point p;
    p.print();
}
