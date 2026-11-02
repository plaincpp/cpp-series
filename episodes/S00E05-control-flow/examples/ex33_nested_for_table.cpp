// example: ex33_nested_for_table
// purpose: Use a nested for loop. The inner loop runs completely for each step of the outer loop.
// expect: ok
#include <iostream>

int main() {
    for (int row = 1; row <= 3; ++row) {
        for (int col = 1; col <= 3; ++col) {
            std::cout << ' ' << row * col;
        }
        std::cout << '\n';
    }
}
