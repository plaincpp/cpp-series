// example: ex33_range_for_push_back_ub
// purpose: Show that a range-for loop uses iterators too, so push_back in its body has the same bug.
// expect: ub
// expect-match: heap-use-after-free
// stdin: 1
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    int bonus = 0;
    std::cin >> bonus;
    for (int age : ages) {
        if (age > 28) {
            ages.push_back(age + bonus);
        }
    }
    std::cout << ages.size() << '\n';
}
