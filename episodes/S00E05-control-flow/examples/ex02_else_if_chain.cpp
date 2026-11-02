// example: ex02_else_if_chain
// purpose: Use an else if chain. Only the branch of the first true condition runs.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int score = 72;
    if (score >= 90) {
        std::cout << "A\n";
    } else if (score >= 80) {
        std::cout << "B\n";
    } else if (score >= 70) {
        std::cout << "C\n";
    } else {
        std::cout << "F\n";
    }
}
