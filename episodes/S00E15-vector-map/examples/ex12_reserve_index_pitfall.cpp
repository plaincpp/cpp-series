// example: ex12_reserve_index_pitfall
// purpose: Show that reserve does not make elements, so values[0] after reserve fails the libstdc++ index check.
// expect: runtime-error
// expect-match: __n < this->size()
// flags: -D_GLIBCXX_ASSERTIONS
// stdin: 0
#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values;
    values.reserve(3);
    std::size_t index = 0;
    std::cin >> index;
    values[index] = 5;
    std::cout << values.size() << '\n';
}
