// example: ex19_null_this_ub
// purpose: Show that a member call through a null pointer is undefined behavior, and UBSan reports it.
// expect: ub
// expect-match: member call on null pointer
// stdin: 0
#include <iostream>

struct Point {
    int x = 0;
    void move_by(int dx) { x += dx; }
};

int main() {
    Point origin;
    int choice = 0;
    std::cin >> choice;
    Point* target = choice == 1 ? &origin : nullptr;
    target->move_by(3);
    std::cout << origin.x << '\n';
}
