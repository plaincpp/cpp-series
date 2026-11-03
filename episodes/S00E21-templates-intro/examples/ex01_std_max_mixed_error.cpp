// example: ex01_std_max_mixed_error
// purpose: Show that std::max(3, 2.5) does not compile, because the two arguments give two different types.
// expect: compile-error
// expect-match: deduced conflicting types for parameter
// in-video: yes
#include <algorithm>
#include <iostream>
int main() {
    std::cout << std::max(3, 7) << '\n';
    std::cout << std::max(3, 2.5) << '\n';
}
