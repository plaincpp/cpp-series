// example: ex28_concept_short_error
// purpose: Preview C++20 concepts: a requirement on T puts the error at the call and names the missing requirement.
// expect: compile-error
// expect-match: constraints not satisfied
// in-video: no
#include <concepts>
#include <iostream>
template <std::totally_ordered T>
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
