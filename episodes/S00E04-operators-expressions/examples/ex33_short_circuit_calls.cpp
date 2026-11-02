// example: ex33_short_circuit_calls
// purpose: Show which operands && and || evaluate, with a function that prints its name.
// expect: ok
#include <iostream>

bool check(const char* name, bool result) {
    std::cout << '[' << name << ']';
    return result;
}

int main() {
    std::cout << "false && ...: ";
    bool first = check("left", false) && check("right", true);
    std::cout << '\n' << "true || ...: ";
    bool second = check("left", true) || check("right", false);
    std::cout << '\n' << "true && ...: ";
    bool third = check("left", true) && check("right", false);
    std::cout << '\n' << std::boolalpha << first << ' ' << second << ' ' << third << '\n';
}
