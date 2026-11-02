// example: ex22_noexcept_throw_terminate
// purpose: Show that an exception that leaves a noexcept function calls std::terminate, and the handler in main does not run.
// expect: runtime-error
// expect-match: terminate called after throwing an instance of 'std::runtime_error'
// stdin: 0
#include <iostream>
#include <stdexcept>

int checked_divide(int a, int b) noexcept {
    if (b == 0) throw std::runtime_error{"divide by zero"};
    return a / b;
}

int main() {
    int divisor = 1;
    std::cin >> divisor;
    try {
        std::cout << checked_divide(10, divisor) << '\n';
    } catch (const std::exception&) {
        std::cout << "caught\n";
    }
}
