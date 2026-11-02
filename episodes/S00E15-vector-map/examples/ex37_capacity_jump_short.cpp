// example: ex37_capacity_jump_short
// purpose: Show in a Short that one push_back on a full vector with 4 elements makes the capacity 8.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v{1, 2, 3, 4};
    std::cout << v.capacity() << '\n';
    v.push_back(5);
    std::cout << v.capacity() << '\n';
}
