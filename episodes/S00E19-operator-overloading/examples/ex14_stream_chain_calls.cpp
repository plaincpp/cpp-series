// example: ex14_stream_chain_calls
// purpose: Show that a chain of << is nested calls, and each call returns the same stream for the next call.
// expect: ok
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
};
std::ostream& operator<<(std::ostream& out, const Vector2& v) {
    return out << '(' << v.x << ", " << v.y << ')';
}
int main() {
    Vector2 a{1, 2};
    std::cout << a << '\n';
    operator<<(operator<<(std::cout, a), '\n');
    std::ostream& same = (std::cout << a);
    std::cout << ' ' << std::boolalpha << (&same == &std::cout) << '\n';
}
