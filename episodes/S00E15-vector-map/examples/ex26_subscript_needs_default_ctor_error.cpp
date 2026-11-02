// example: ex26_subscript_needs_default_ctor_error
// purpose: Show that map operator[] needs a default constructor for the value type.
// expect: compile-error
// expect-match: Point
#include <map>
#include <string>

struct Point {
    Point(int x_value, int y_value) : x{x_value}, y{y_value} {}
    int x;
    int y;
};

int main() {
    std::map<std::string, Point> places;
    places["home"] = Point{1, 2};
}
