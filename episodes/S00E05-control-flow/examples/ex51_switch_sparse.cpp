// example: ex51_switch_sparse
// purpose: Show a sparse switch that the compilers change into compares with -O2, not a table.
// expect: ok
// stdin: 1000
#include <iostream>

int main() {
    int code = 0;
    std::cin >> code;
    switch (code) {
    case 1:
        std::cout << "one\n";
        break;
    case 100:
        std::cout << "hundred\n";
        break;
    case 1000:
        std::cout << "thousand\n";
        break;
    case 10000:
        std::cout << "ten thousand\n";
        break;
    default:
        std::cout << "other\n";
    }
}
