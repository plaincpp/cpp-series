// example: ex03_else_if_order_pitfall
// purpose: Show that a wrong order of conditions hides a branch, because the first true condition wins.
// expect: ok
#include <iostream>

int main() {
    int score = 95;
    if (score >= 70) {
        std::cout << "C\n";
    } else if (score >= 90) {
        std::cout << "A\n";
    } else {
        std::cout << "F\n";
    }
}
