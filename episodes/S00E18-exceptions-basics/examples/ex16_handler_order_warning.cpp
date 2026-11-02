// example: ex16_handler_order_warning
// purpose: Show that both compilers warn when a base class handler comes before a derived class handler (-Werror makes it an error).
// expect: compile-error
// expect-match: will be caught by earlier handler
// flags: -Werror
// in-video: yes
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
    std::vector<int> scores{90, 85};
    try {
        std::cout << scores.at(5) << '\n';
    } catch (const std::exception&) {
        std::cout << "exception\n";
    } catch (const std::out_of_range&) {
        std::cout << "out_of_range\n";
    }
}
