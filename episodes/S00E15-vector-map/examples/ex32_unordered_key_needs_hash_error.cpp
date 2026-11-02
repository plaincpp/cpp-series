// example: ex32_unordered_key_needs_hash_error
// purpose: Show that std::unordered_map needs std::hash for its key type, so a struct key without it does not compile.
// expect: compile-error
// expect-match: hash
#include <unordered_map>

struct Point {
    int x;
    int y;
    bool operator==(const Point&) const = default;
};

int main() {
    std::unordered_map<Point, int> heights;
    heights[Point{1, 2}] = 7;
}
