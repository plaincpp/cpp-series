// example: ex27_constexpr_runtime_value_error
// purpose: Show that a constexpr variable cannot get a value from run time.
// expect: compile-error
// expect-match: constant expression
// in-video: yes
#include <iostream>
int main() {
    int input = 0;
    std::cin >> input;
    constexpr int limit = input * 2;
    std::cout << limit << '\n';
}
