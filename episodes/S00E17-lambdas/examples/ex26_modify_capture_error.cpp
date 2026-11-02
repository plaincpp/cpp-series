// example: ex26_modify_capture_error
// purpose: Show that a lambda without mutable cannot change a variable that it captures by value.
// expect: compile-error
// expect-match: variable
// in-video: yes
#include <iostream>

int main() {
    int calls = 0;
    auto count = [calls]() {
        ++calls;
        return calls;
    };
    std::cout << count() << '\n';
}
