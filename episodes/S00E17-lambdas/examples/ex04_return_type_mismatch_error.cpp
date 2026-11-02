// example: ex04_return_type_mismatch_error
// purpose: Show that all return statements of a lambda must give the same type when it has no return type.
// expect: compile-error
// expect-match: return type
// in-video: yes
#include <iostream>

int main() {
    auto half = [](int x) {
        if (x < 0) {
            return 0;
        }
        return x / 2.0;
    };
    std::cout << half(3) << '\n';
}
