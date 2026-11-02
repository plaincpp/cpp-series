// example: ex12_argument_order_gcc
// purpose: Show that GCC calls the right argument first here, because the standard does not set the order of evaluation.
// expect: ok
// compilers: gcc
// in-video: yes
#include <iostream>

int counter = 0;

int next_id() { return ++counter; }

void show(int first, int second) {
    std::cout << first << ' ' << second << '\n';
}

int main() {
    show(next_id(), next_id());
}
