// example: ex13_argument_order_clang
// purpose: Show that Clang calls the left argument first here, because the standard does not set the order of evaluation.
// expect: ok
// compilers: clang
#include <iostream>

int counter = 0;

int next_id() { return ++counter; }

void show(int first, int second) {
    std::cout << first << ' ' << second << '\n';
}

int main() {
    show(next_id(), next_id());
}
