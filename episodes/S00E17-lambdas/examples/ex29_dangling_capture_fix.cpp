// example: ex29_dangling_capture_fix
// purpose: Correct the dangling capture: capture the parameter by value, so the lambda keeps a copy.
// expect: ok
// stdin: 5
// in-video: yes
#include <iostream>

auto make_adder(int amount) {
    return [amount](int x) { return x + amount; };
}

int main() {
    int amount = 0;
    std::cin >> amount;
    auto add = make_adder(amount);
    std::cout << add(10) << '\n';
}
