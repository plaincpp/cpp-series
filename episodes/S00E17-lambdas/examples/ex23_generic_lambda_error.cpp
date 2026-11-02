// example: ex23_generic_lambda_error
// purpose: Show that a generic lambda gives a compile error only when a call uses a type with no match.
// expect: compile-error
// expect-match: instantiation of
// in-video: yes
#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    auto twice = [](auto value) { return value + value; };
    std::cout << twice(4) << '\n';
    Point p{1, 2};
    twice(p);
}
