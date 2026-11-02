// example: ex08_throw_skips_rest
// purpose: Show that a throw skips the rest of the function and the try block, and the program continues after the handler.
// expect: ok
#include <iostream>
#include <stdexcept>

void step(int number) {
    std::cout << "step " << number << " start\n";
    if (number == 2) throw std::runtime_error{"step failed"};
    std::cout << "step " << number << " end\n";
}

int main() {
    try {
        step(1);
        step(2);
        step(3);
    } catch (const std::runtime_error& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
    std::cout << "after the handler\n";
}
