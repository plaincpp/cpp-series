// example: ex10_move_ctor_copies_member_pitfall
// purpose: Show that a move constructor without std::move on a member copies that member.
// expect: ok
#include <iostream>
#include <utility>
struct Tracer {
    Tracer() = default;
    Tracer(const Tracer&) { std::cout << "copy\n"; }
    Tracer(Tracer&&) noexcept { std::cout << "move\n"; }
    ~Tracer() {}
};
struct Bad {
    Tracer photo;
    Bad() = default;
    Bad(Bad&& other) noexcept : photo{other.photo} {}
};
struct Good {
    Tracer photo;
    Good() = default;
    Good(Good&& other) noexcept : photo{std::move(other.photo)} {}
};
int main() {
    Bad a;
    std::cout << "bad: ";
    Bad b = std::move(a);
    Good c;
    std::cout << "good: ";
    Good d = std::move(c);
}
