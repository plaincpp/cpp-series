// example: ex33_pass_by_pointer
// purpose: Show that a pointer parameter also changes the variable of the caller, with & at the call and * in the body.
// expect: ok
#include <iostream>

void add_bonus(int* score) {
    *score = *score + 10;
    std::cout << "inside: " << *score << '\n';
}

int main() {
    int score = 50;
    add_bonus(&score);
    std::cout << "after: " << score << '\n';
}
