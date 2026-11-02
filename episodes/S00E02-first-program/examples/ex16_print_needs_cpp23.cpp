// example: ex16_print_needs_cpp23
// purpose: Show that std::print fails to compile with -std=c++20.
// expect: compile-error
// expect-match: 'print'
// std: c++20
#include <print>

int main() {
    std::print("Hello, {}!\n", "world");
}
