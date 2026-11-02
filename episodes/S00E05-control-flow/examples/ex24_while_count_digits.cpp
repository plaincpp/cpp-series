// example: ex24_while_count_digits
// purpose: Use a while loop when the number of steps is not known before the loop starts.
// expect: ok
// in-video: yes
// stdin: 40213
#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;
    int digits = 0;
    while (number > 0) {
        number /= 10;
        ++digits;
    }
    std::cout << digits << '\n';
}
