// example: ex20_generic_lambda
// purpose: Use an auto parameter to make one lambda work with int, double and std::string.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>

int main() {
    auto twice = [](auto value) { return value + value; };
    std::cout << twice(4) << '\n';
    std::cout << twice(1.5) << '\n';
    std::cout << twice(std::string("ab")) << '\n';
}
