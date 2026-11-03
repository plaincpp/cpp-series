// example: ex20_used_member_error
// purpose: Show that a call of print on Box of Point makes the member function, and then the compiler finds the error.
// expect: compile-error
// expect-match: and 'const Point')
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
    Box<Point> corner{{3, 4}};
    corner.print();
}
