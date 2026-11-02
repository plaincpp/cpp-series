// example: ex08_grid_row_major
// purpose: Show that a two-dimensional C array is an array of rows, and each row is an array.
// expect: ok
#include <iostream>
#include <iterator>

int main() {
    int grid[2][3] = {{1, 2, 3}, {4, 5, 6}};
    std::cout << sizeof(grid) << ' ' << sizeof(grid[0]) << '\n';
    std::cout << std::size(grid) << ' ' << std::size(grid[0]) << '\n';
    for (const auto& row : grid) {
        for (int cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
}
