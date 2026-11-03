// example: ex09_pass_by_value_reference
// purpose: Compare a parameter that copies the argument with a reference parameter that changes it.
// expect: ok
// in-video: yes
#include <iostream>
int add_bonus_copy(int score) {
    score += 10;
    return score;
}
void add_bonus(int& score) {
    score += 10;
}
int main() {
    int score = 70;
    add_bonus_copy(score);
    add_bonus(score);
    std::cout << score << '\n';
}
