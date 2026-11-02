// example: ex19_default_equality
// purpose: Use a default operator== and show that the compiler also accepts != from it.
// expect: ok
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
    bool operator==(const Vector2&) const = default;
};
int main() {
    Vector2 a{1, 2};
    Vector2 b{1, 2};
    Vector2 c{2, 1};
    std::cout << std::boolalpha;
    std::cout << (a == b) << ' ' << (a != c) << '\n';
}
