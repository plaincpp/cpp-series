// example: ex19_ranges_sort_find
// purpose: Use the C++20 ranges versions, which take the whole container instead of two iterators.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19};
    std::ranges::sort(ages);
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
    auto it = std::ranges::find(ages, 30);
    std::cout << it - ages.begin() << '\n';
    std::cout << std::ranges::contains(ages, 99) << '\n';
}
