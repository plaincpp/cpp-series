// example: ex21_sort_comparisons_cost
// purpose: Count the comparisons of std::sort and std::find on 1024 elements with libstdc++.
// expect: ok
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

long comparisons = 0;

bool counted_less(int a, int b) {
    ++comparisons;
    return a < b;
}

bool counted_is_last(int value) {
    ++comparisons;
    return value == 1023;
}

int main() {
    const int n = 1024;
    std::vector<int> values;
    for (int i = 0; i < n; ++i) {
        values.push_back(i * 7919 % n);
    }
    std::sort(values.begin(), values.end(), counted_less);
    std::cout << "sort: " << comparisons << '\n';
    std::cout << "n log2 n: " << n * static_cast<int>(std::log2(n)) << '\n';
    std::cout << "n * n: " << n * n << '\n';
    comparisons = 0;
    auto it = std::find_if(values.begin(), values.end(), counted_is_last);
    std::cout << "find: " << comparisons << '\n';
    std::cout << "index: " << it - values.begin() << '\n';
}
