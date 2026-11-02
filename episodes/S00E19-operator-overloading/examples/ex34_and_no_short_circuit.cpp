// example: ex34_and_no_short_circuit
// purpose: Show that an overloaded && always evaluates both operands: it does not short-circuit.
// expect: ok
// in-video: no
#include <iostream>
struct Flag {
    bool on;
};
bool operator&&(Flag a, Flag b) {
    return a.on && b.on;
}
Flag check(const char* name, bool on) {
    std::cout << "check " << name << '\n';
    return {on};
}
int main() {
    bool both = check("left", false) && check("right", true);
    std::cout << std::boolalpha << both << '\n';
    bool plain = false && check("never", true).on;
    std::cout << plain << '\n';
}
