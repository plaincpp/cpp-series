// example: ex15_pass_by_reference
// purpose: Show that a reference parameter changes the variable of the caller.
// expect: ok
// in-video: yes
#include <iostream>

void add_bonus(int& score) {
    score = score + 10;
    std::cout << "inside: " << score << '\n';
}

int main() {
    int score = 50;
    add_bonus(score);
    std::cout << "after: " << score << '\n';
}
