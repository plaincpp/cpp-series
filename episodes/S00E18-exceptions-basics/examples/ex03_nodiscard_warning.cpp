// example: ex03_nodiscard_warning
// purpose: Show that [[nodiscard]] makes the compiler warn when a caller ignores the error code (-Werror makes it an error).
// expect: compile-error
// expect-match: nodiscard
// flags: -Werror
// in-video: yes
#include <iostream>

[[nodiscard]] bool average(int total, int count, int& out) {
    if (count == 0) return false;
    out = total / count;
    return true;
}

int main() {
    int value = 0;
    average(90, 0, value);
    std::cout << "average " << value << '\n';
}
