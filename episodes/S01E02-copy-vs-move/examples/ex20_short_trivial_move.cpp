// example: ex20_short_trivial_move
// purpose: Show that a move of a struct of ints copies the values and keeps the source.
// expect: ok
// in-video: yes
#include <iostream>
#include <utility>
struct Point { int x; int y; };
int main() {
    Point p{1, 2};
    Point q = std::move(p);
    std::cout << p.x << ' ' << q.x << '\n';
}
