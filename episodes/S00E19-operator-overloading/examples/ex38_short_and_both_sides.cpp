// example: ex38_short_and_both_sides
// purpose: Show in a short program that an overloaded && calls both sides.
// expect: ok
// in-video: yes
#include <print>
struct Flag { bool on; };
bool operator&&(Flag a, Flag b) {
    return a.on && b.on;
}
Flag say(bool on) {
    std::println("called");
    return {on};
}
int main() { say(false) && say(true); }
