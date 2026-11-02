// example: ex15_missing_quote_cascade
// purpose: Show that one missing quote causes many errors, and the first error names the cause.
// expect: compile-error
// expect-match: missing terminating
// in-video: yes
#include <iostream>

int main() {
    std::cout << "Hello, world!\n;
    std::cout << "Bye\n";
}
