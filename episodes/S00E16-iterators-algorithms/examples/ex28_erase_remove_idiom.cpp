// example: ex28_erase_remove_idiom
// purpose: Use the erase-remove idiom: erase the elements from the new end to the old end.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 0, 41, 0, 19};
    ages.erase(std::remove(ages.begin(), ages.end(), 0), ages.end());
    std::cout << ages.size() << '\n';
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
}
