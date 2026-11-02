// example: ex02_lambda_syntax
// purpose: Show the parts of a lambda: captures, parameters, an optional return type and a body.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    auto add = [](int a, int b) { return a + b; };
    auto half = [](int x) -> double { return x / 2.0; };
    auto hello = [] { return "hello"; };
    std::cout << add(2, 3) << '\n';
    std::cout << half(5) << '\n';
    std::cout << hello() << '\n';
    std::cout << [](int x) { return x * x; }(4) << '\n';
}
