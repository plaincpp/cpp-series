// example: ex14_amortized_copies
// purpose: Count element copies for 1024 push_back calls to show that the average cost stays constant.
// expect: ok
#include <iostream>
#include <vector>

int copies = 0;

struct Item {
    Item() = default;
    Item(const Item&) { ++copies; }
};

int main() {
    std::vector<Item> items;
    Item item;
    for (int i = 0; i < 1024; ++i) {
        items.push_back(item);
    }
    std::cout << "push_back calls: " << items.size() << '\n';
    std::cout << "copies: " << copies << '\n';
}
