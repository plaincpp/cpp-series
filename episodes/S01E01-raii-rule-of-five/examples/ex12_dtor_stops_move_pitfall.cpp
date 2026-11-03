// example: ex12_dtor_stops_move_pitfall
// purpose: Show that an empty user destructor stops the implicit move, so std::move copies.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
#include <utility>
struct Tracer {
    Tracer() = default;
    Tracer(const Tracer&) { std::cout << "copy\n"; }
    Tracer(Tracer&&) noexcept { std::cout << "move\n"; }
};
struct Widget { std::string name; Tracer t; ~Widget() {} };
int main() {
    Widget a;
    Widget b = std::move(a);
}
