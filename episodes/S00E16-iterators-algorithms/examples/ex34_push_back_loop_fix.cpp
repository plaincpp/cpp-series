// example: ex34_push_back_loop_fix
// purpose: Use an index and the old size, so push_back in the loop is safe and visits only old elements.
// expect: ok
// in-video: yes
#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    std::size_t old_size = ages.size();
    for (std::size_t i = 0; i < old_size; ++i) {
        if (ages[i] > 28) ages.push_back(ages[i] + 1);
    }
    for (int age : ages) std::cout << age << ' ';
    std::cout << '\n';
}
