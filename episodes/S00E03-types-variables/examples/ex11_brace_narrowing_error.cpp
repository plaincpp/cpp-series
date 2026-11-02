// example: ex11_brace_narrowing_error
// purpose: Show that brace initialization does not compile when the conversion loses data (narrowing).
// expect: compile-error
// expect-match: narrow
// in-video: yes
#include <iostream>

int main() {
    int whole{9.99};
    std::cout << whole << '\n';
}
