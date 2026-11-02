// example: ex23_print_format_check
// purpose: Show that the compiler checks the format string of std::print: three braces and two values do not compile.
// expect: compile-error
// expect-match: call to consteval function
#include <print>

int main() {
    std::print("{} + {} = {}\n", 2, 3);
}
