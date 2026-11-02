// example: ex08_size_capacity
// purpose: Show size and capacity after each push_back: the capacity grows in steps.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values;
    for (int i = 1; i <= 9; ++i) {
        values.push_back(i);
        std::cout << values.size() << '/' << values.capacity() << ' ';
    }
    std::cout << '\n';
}
