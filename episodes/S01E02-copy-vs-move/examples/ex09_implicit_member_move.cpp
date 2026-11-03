// example: ex09_implicit_member_move
// purpose: Show that the implicit move constructor moves each member, and the implicit copy constructor copies it.
// expect: ok
#include <iostream>
#include <utility>
struct Tracer {
    Tracer() = default;
    Tracer(const Tracer&) { std::cout << "copy\n"; }
    Tracer(Tracer&&) noexcept { std::cout << "move\n"; }
    ~Tracer() {}
};
struct Profile {
    Tracer photo;
};
int main() {
    Profile a;
    Profile b = a;
    Profile c = std::move(a);
}
