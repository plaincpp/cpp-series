// example: ex13_no_dtor_moves
// purpose: Show that the same class without the destructor gets the implicit move again.
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
struct Widget { std::string name; Tracer t; };
int main() {
    Widget a;
    Widget b = std::move(a);
}
