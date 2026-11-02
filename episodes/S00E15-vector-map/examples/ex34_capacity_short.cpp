// example: ex34_capacity_short
// purpose: Show that the capacity of a vector grows in steps, not by one.
// expect: ok
// in-video: no
#include <iostream>
#include <vector>
int main() {
    std::vector<int> values;
    for (int i = 0; i < 5; ++i) {
        values.push_back(i);
        std::cout << values.capacity() << ' ';
    }
    std::cout << '\n';
}
