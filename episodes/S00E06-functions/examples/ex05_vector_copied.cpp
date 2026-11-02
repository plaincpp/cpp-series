// example: ex05_vector_copied
// purpose: Show that pass by value copies a whole vector, so the vector of the caller does not change.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

void add_item(std::vector<int> items) {
    items.push_back(4);
}

int main() {
    std::vector<int> items{1, 2, 3};
    add_item(items);
    std::cout << items.size() << '\n';
}
