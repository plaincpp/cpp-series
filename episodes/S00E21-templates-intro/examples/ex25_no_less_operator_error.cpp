// example: ex25_no_less_operator_error
// purpose: Show an error inside a template: max_of of Point needs a less-than operator that Point does not have.
// expect: compile-error
// expect-match: 'Point' and 'Point'
// in-video: yes
#include <iostream>
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
struct Point {
    int x, y;
};
int main() {
    Point p = max_of(Point{1, 2}, Point{3, 4});
    std::cout << p.x << '\n';
}
