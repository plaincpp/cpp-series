// example: ex07_reference_total
// purpose: Use a capture by reference to change a local variable from a lambda in std::for_each.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> prices{20, 35, 15};
    int total = 0;
    std::for_each(prices.begin(), prices.end(),
                  [&total](int price) { total += price; });
    std::cout << "total: " << total << '\n';
}
