// example: ex17_wait_for_input
// purpose: Give a program that waits for input, so GDB can attach to it and show where it waits.
// expect: ok
// flags: -g -O0
// stdin: 5
#include <iostream>

int read_count() {
    int count = 0;
    std::cin >> count;
    return count;
}

int main() {
    int count = read_count();
    std::cout << "count: " << count << '\n';
}
