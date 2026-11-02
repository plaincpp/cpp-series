// example: ex28_read_until_end
// purpose: Use a while loop that reads numbers until the input ends.
// expect: ok
// stdin: 4 8 15 16 23 42
#include <iostream>

int main() {
    int value = 0;
    int count = 0;
    int total = 0;
    while (std::cin >> value) {
        ++count;
        total += value;
    }
    std::cout << count << " values, total " << total << '\n';
}
