// example: ex23_default_equality_pointer_pitfall
// purpose: Show that a default operator== compares a pointer member by address, not the value it points to.
// expect: ok
// in-video: no
#include <iostream>
struct Reading {
    const int* value;
    bool operator==(const Reading&) const = default;
};
int main() {
    int first = 7;
    int second = 7;
    Reading a{&first};
    Reading b{&second};
    std::cout << std::boolalpha;
    std::cout << (a == b) << ' ' << (*a.value == *b.value) << '\n';
}
