// example: ex14_sort_part_range
// purpose: Use a part of a vector as a range, so std::sort changes only the elements in that range.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

void print(const std::vector<int>& values) {
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> ages{52, 30, 41, 25, 19};
    std::sort(ages.begin(), ages.begin() + 3);
    print(ages);
    std::sort(ages.begin() + 3, ages.end());
    print(ages);
}
