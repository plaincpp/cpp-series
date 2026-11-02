// example: ex17_static_member_no_definition
// purpose: Show that a static data member declared in a class needs a definition.
// expect: link-error
// expect-match: undefined reference to `Counter::created'
#include <iostream>

struct Counter {
    static int created;
    Counter() { ++created; }
};

int main() {
    Counter first;
    Counter second;
    std::cout << Counter::created << '\n';
}
