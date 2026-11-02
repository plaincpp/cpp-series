// example: ex06_value_vs_reference
// purpose: Compare a capture by value and a capture by reference after the variable changes.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int count = 1;
    auto by_value = [count]() { return count; };
    auto by_reference = [&count]() { return count; };
    count = 5;
    std::cout << by_value() << '\n';
    std::cout << by_reference() << '\n';
}
