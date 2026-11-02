// example: ex06_vector_index_ub
// purpose: Show that operator[] does not check the index, so an index past the end is undefined behavior.
// expect: ub
// expect-match: heap-buffer-overflow
// stdin: 3
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores{90, 85, 77};
    std::size_t index = 0;
    std::cin >> index;
    std::cout << scores[index] << '\n';
}
