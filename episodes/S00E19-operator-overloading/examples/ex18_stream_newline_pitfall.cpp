// example: ex18_stream_newline_pitfall
// purpose: Show the bug when operator<< adds a newline: the caller cannot put two values on one line.
// expect: ok
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
};
std::ostream& operator<<(std::ostream& out, const Vector2& v) {
    return out << '(' << v.x << ", " << v.y << ")\n";
}
int main() {
    Vector2 from{0, 0};
    Vector2 to{3, 4};
    std::cout << "move " << from << " to " << to << '\n';
}
