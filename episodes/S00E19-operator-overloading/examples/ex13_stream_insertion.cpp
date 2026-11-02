// example: ex13_stream_insertion
// purpose: Write a free operator<< that prints a Vector2 and returns the stream, so that the output chains.
// expect: ok
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
};
std::ostream& operator<<(std::ostream& out, const Vector2& v) {
    return out << '(' << v.x << ", " << v.y << ')';
}
int main() {
    Vector2 a{1, 2};
    Vector2 b{3, 4};
    std::cout << a << " and " << b << '\n';
}
