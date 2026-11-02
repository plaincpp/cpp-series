// example: ex28_comparison_results
// purpose: Show the six comparison operators and that each gives a bool.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int score = 7;
    int pass = 5;
    std::cout << (score == pass) << (score != pass) << '\n';
    std::cout << (score < pass) << (score <= pass) << '\n';
    std::cout << (score > pass) << (score >= pass) << '\n';
    std::cout << std::boolalpha << (score > pass) << '\n';
}
