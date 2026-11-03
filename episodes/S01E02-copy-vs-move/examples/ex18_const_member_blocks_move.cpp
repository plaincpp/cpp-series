// example: ex18_const_member_blocks_move
// purpose: Show that a const member is copied when the object moves.
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
    const Tracer photo;
};
int main() {
    Profile a{};
    Profile b = std::move(a);
}
