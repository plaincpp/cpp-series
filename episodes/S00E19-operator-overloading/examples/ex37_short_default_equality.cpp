// example: ex37_short_default_equality
// purpose: Show in a short program that one default operator== also gives !=.
// expect: ok
// in-video: yes
#include <print>
struct Point {
    int x, y;
    bool operator==(const Point&) const
        = default;
};
int main() {
    Point a{1, 2}, b{1, 3};
    std::println("{}", a != b);
}
