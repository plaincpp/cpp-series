// example: ex29_map_lookup_comparisons
// purpose: Count key comparisons in std::map find to show that the cost grows with log2 of the size.
// expect: ok
#include <iomanip>
#include <iostream>
#include <map>

int comparisons = 0;

struct CountingLess {
    bool operator()(int a, int b) const {
        ++comparisons;
        return a < b;
    }
};

double average_comparisons(int size) {
    std::map<int, int, CountingLess> table;
    for (int key = 0; key < size; ++key) {
        table.emplace(key, key);
    }
    comparisons = 0;
    for (int key = 0; key < size; ++key) {
        table.find(key);
    }
    return static_cast<double>(comparisons) / size;
}

int main() {
    std::cout << std::fixed << std::setprecision(1);
    for (int size : {16, 1024, 65536}) {
        std::cout << size << " keys: " << average_comparisons(size)
                  << " comparisons\n";
    }
}
