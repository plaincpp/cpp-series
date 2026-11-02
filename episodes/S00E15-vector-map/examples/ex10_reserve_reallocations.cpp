// example: ex10_reserve_reallocations
// purpose: Count the new memory blocks that 1000 push_back calls need, without and with reserve.
// expect: ok
#include <iostream>
#include <vector>

int count_new_blocks(bool reserve_first) {
    std::vector<int> values;
    if (reserve_first) {
        values.reserve(1000);
    }
    int new_blocks = 0;
    const int* block = values.data();
    for (int i = 0; i < 1000; ++i) {
        values.push_back(i);
        if (values.data() != block) {
            ++new_blocks;
            block = values.data();
        }
    }
    return new_blocks;
}

int main() {
    std::cout << "without reserve: " << count_new_blocks(false) << '\n';
    std::cout << "with reserve: " << count_new_blocks(true) << '\n';
}
