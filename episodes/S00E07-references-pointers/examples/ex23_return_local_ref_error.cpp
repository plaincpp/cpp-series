// example: ex23_return_local_ref_error
// purpose: Show that in C++23 a function cannot return a local variable as a non-const reference.
// expect: compile-error
// expect-match: non-const lvalue reference
#include <iostream>

int& make_score() {
    int score = 42;
    return score;
}

int main() {
    int& score = make_score();
    std::cout << score << '\n';
}
