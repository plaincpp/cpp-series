// example: ex31_erase_in_loop_ub
// purpose: Show that erase makes the iterator invalid, so ++it after an erase of the last element runs past the end.
// expect: ub
// expect-match: heap-buffer-overflow
// stdin: 5 8
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values;
    int value = 0;
    while (std::cin >> value) {
        values.push_back(value);
    }
    for (auto it = values.begin(); it != values.end(); ++it) {
        if (*it % 2 == 0) {
            values.erase(it);
        }
    }
    std::cout << values.size() << '\n';
}
