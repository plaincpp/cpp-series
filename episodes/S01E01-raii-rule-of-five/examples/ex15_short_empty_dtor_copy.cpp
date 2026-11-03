// example: ex15_short_empty_dtor_copy
// purpose: Show in a few lines that an empty destructor makes std::move copy.
// expect: ok
// in-video: no
#include <iostream>
#include <string>
#include <utility>
struct Tracer {
    Tracer() = default;
    Tracer(const Tracer&) { std::cout << "copy\n"; }
    Tracer(Tracer&&) noexcept { std::cout << "move\n"; }
};
struct Widget { std::string name; Tracer t; ~Widget() {} };
int main() { Widget a; Widget b = std::move(a); }
