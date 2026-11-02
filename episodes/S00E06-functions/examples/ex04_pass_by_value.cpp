// example: ex04_pass_by_value
// purpose: Show that a function changes its own copy, and the variable of the caller does not change.
// expect: ok
// in-video: yes
#include <iostream>

void add_bonus(int score) {
    score = score + 10;
    std::cout << "inside: " << score << '\n';
}

int main() {
    int score = 50;
    add_bonus(score);
    std::cout << "after: " << score << '\n';
}
