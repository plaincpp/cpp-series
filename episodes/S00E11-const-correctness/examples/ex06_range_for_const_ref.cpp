// example: ex06_range_for_const_ref
// purpose: Compare the copies in a range-for loop by value and by const reference.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>
int copies = 0;
struct Item {
    int id = 0;
    Item() = default;
    Item(const Item& other) : id(other.id) { ++copies; }
};
int main() {
    std::vector<Item> items(3);
    int total = 0;
    for (Item item : items) {
        total += item.id;
    }
    std::cout << "by value: " << copies << '\n';
    copies = 0;
    for (const auto& item : items) {
        total += item.id;
    }
    std::cout << "by const&: " << copies << '\n';
    std::cout << "total: " << total << '\n';
}
