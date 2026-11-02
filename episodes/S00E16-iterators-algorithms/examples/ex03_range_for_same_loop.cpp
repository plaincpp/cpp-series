// example: ex03_range_for_same_loop
// purpose: Show that a range-for loop does the same steps as a loop with begin, end and an iterator.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        int age = *it;
        std::cout << age << ' ';
    }
    std::cout << '\n';
}
