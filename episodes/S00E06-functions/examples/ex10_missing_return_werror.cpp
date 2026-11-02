// example: ex10_missing_return_werror
// purpose: Use -Werror=return-type to make a missing return a compile error.
// expect: compile-error
// expect-match: return-type
// flags: -Werror=return-type
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
