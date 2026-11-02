// example: ex20_map_key_needs_less_error
// purpose: Show that std::map needs operator< for its key type, so a struct key without it does not compile.
// expect: compile-error
// expect-match: operator<
#include <map>

struct Point {
    int x;
    int y;
};

int main() {
    std::map<Point, int> heights;
    heights[Point{1, 2}] = 7;
}
