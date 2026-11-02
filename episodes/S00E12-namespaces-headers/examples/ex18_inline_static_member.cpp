// example: ex18_inline_static_member
// purpose: Use static inline to define a static data member inside the class.
// expect: ok
#include <iostream>

struct Counter {
    static inline int created = 0;
    Counter() { ++created; }
};

int main() {
    Counter first;
    Counter second;
    std::cout << Counter::created << '\n';
}
