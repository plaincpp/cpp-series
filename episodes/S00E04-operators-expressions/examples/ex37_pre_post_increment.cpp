// example: ex37_pre_post_increment
// purpose: Compare the value of score++ with the value of ++level.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int score = 5;
    int before = score++;
    std::cout << before << ' ' << score << '\n';
    int level = 5;
    int after = ++level;
    std::cout << after << ' ' << level << '\n';
}
