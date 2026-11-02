// example: ex28_dangling_capture_ub
// purpose: Show that a lambda that captures a parameter by reference and runs later reads a dead object.
// expect: ub
// expect-match: stack-use-after-return
// stdin: 5
// in-video: yes
#include <iostream>

auto make_adder(int amount) {
    return [&amount](int x) { return x + amount; };
}

int main() {
    int amount = 0;
    std::cin >> amount;
    auto add = make_adder(amount);
    std::cout << add(10) << '\n';
}
