// example: ex09_missing_return_ub
// purpose: Show that a function that ends with no return on one path is undefined behavior.
// expect: ub
// expect-match: end of a value-returning function
// stdin: 30
// in-video: yes
#include <iostream>

char grade(int score) {
    if (score >= 90) return 'A';
    if (score >= 50) return 'P';
}

int main() {
    int score = 0;
    std::cin >> score;
    std::cout << grade(score) << '\n';
}
