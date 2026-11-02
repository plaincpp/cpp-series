// example: ex13_sort_basics
// purpose: Use std::sort on the range begin to end, first in ascending order, then with std::greater in descending order.
// expect: ok
// in-video: yes
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19};
    std::sort(ages.begin(), ages.end());
    for (int age : ages) std::cout << age << ' ';
    std::cout << '\n';
    std::sort(ages.begin(), ages.end(), std::greater<>{});
    for (int age : ages) std::cout << age << ' ';
    std::cout << '\n';
}
