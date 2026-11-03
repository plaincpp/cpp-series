// example: ex07_typename_or_class
// purpose: Show that class and typename mean the same thing in a template parameter list.
// expect: ok
// in-video: no
#include <iostream>
template <class T>
T twice(T value) {
    return value + value;
}
template <typename T>
T square(T value) {
    return value * value;
}
int main() {
    std::cout << twice(21) << ' ' << square(1.5) << '\n';
}
