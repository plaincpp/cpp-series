// example: ex32_vector_not_new_array
// purpose: Use std::vector in place of new[] for an array with a run-time size, with no delete[].
// expect: ok
// stdin: 4
#include <cstddef>
#include <iostream>
#include <vector>
int main() {
    std::size_t count = 0;
    std::cin >> count;
    std::vector<int> scores(count);
    for (std::size_t i = 0; i < count; ++i) {
        scores[i] = static_cast<int>(i) * 10;
    }
    std::cout << scores.size() << " scores, last " << scores.back() << '\n';
}
