// example: ex02_hello_print
// purpose: Show the same output with std::print and std::println from C++23.
// expect: ok
// in-video: yes
#include <print>

int main() {
    std::print("Hello, {}!\n", "world");
    std::println("2 + 3 = {}", 2 + 3);
}
