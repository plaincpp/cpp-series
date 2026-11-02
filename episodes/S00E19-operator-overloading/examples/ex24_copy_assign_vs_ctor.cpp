// example: ex24_copy_assign_vs_ctor
// purpose: Compare copy construction, which makes a new object, and copy assignment, which changes an old object.
// expect: ok
// in-video: yes
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
    Tracer b = a;
    b = a;
}
