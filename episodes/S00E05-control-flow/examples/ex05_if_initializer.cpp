// example: ex05_if_initializer
// purpose: Use an if statement with an initializer. The variable exists only in the if and else branches.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int total = 17;
    int box = 5;
    if (int rest = total % box; rest == 0) {
        std::cout << "full boxes\n";
    } else {
        std::cout << rest << " items left\n";
    }
}
