// example: ex39_copy_assign_which_line
// purpose: Show which lines call the copy constructor and which line calls copy assignment, for checkpoint q03.
// expect: ok
// in-video: no
#include <iostream>
struct Tracer {
    Tracer() {}
    Tracer(const Tracer&) { std::cout << "copy constructor\n"; }
    Tracer& operator=(const Tracer&) {
        std::cout << "copy assignment\n";
        return *this;
    }
};
int main() {
    Tracer a;
    Tracer c{a};
    Tracer d = c;
    d = a;
}
