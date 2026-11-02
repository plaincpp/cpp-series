// example: ex38_compound_assignment
// purpose: Show the compound assignment operators and the decrement operator on one variable.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int total = 10;
    total += 5;
    total -= 3;
    total *= 2;
    std::cout << total << '\n';
    total /= 5;
    total %= 3;
    --total;
    std::cout << total << '\n';
}
