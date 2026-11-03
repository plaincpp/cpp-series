// example: ex19_unused_member_not_instantiated
// purpose: Show that the compiler makes a member function of a class template only when the code calls it.
// expect: ok
// in-video: no
#include <iostream>
template <typename T>
struct Box {
    T value;
    void print() const { std::cout << value << '\n'; }
};
struct Point {
    int x, y;
};
int main() {
    Box<int> number{42};
    number.print();
    Box<Point> corner{{3, 4}};
    std::cout << corner.value.x << ' ' << corner.value.y << '\n';
}
