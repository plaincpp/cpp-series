// example: ex11_reverse_iterators
// purpose: Use rbegin and rend to visit the elements from the back, and to sort in descending order.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 19, 41, 25};
    for (auto it = ages.rbegin(); it != ages.rend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    std::sort(ages.rbegin(), ages.rend());
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
}
