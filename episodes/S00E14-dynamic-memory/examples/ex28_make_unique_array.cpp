// example: ex28_make_unique_array
// purpose: Use std::make_unique for an array with a run-time size, and show that the elements start at zero.
// expect: ok
// stdin: 3
#include <cstddef>
#include <iostream>
#include <memory>
int main() {
    std::size_t count = 0;
    std::cin >> count;
    auto scores = std::make_unique<int[]>(count);
    scores[count - 1] = 7;
    std::cout << scores[0] << ' ' << scores[count - 1] << '\n';
}
