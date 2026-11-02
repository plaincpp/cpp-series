// example: ex09_capacity_doubles
// purpose: Show that libstdc++ doubles the capacity each time a full vector gets a new element.
// expect: ok
#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values;
    std::size_t last = values.capacity();
    std::cout << last;
    for (int i = 0; i < 1000; ++i) {
        values.push_back(i);
        if (values.capacity() != last) {
            last = values.capacity();
            std::cout << ' ' << last;
        }
    }
    std::cout << '\n';
}
