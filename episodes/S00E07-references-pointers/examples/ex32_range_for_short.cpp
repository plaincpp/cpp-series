// example: ex32_range_for_short
// purpose: Show that a range-for loop without a reference changes only copies.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> prices{10, 20};
    for (int p : prices) p = p * 2;
    std::cout << prices[0] << '\n';
}
