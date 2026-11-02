// example: ex39_range_for_const_ref
// purpose: Use a const reference in a range-for loop to read large elements without a copy.
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string names[] = {"Ada", "Bjarne", "Grace"};
    for (const std::string& name : names) {
        std::cout << name << ' ' << name.size() << '\n';
    }
}
