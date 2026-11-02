// example: ex16_stable_sort_by_length
// purpose: Use std::stable_sort with a comparator, so equal elements keep their old order.
// expect: ok
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool shorter(const std::string& a, const std::string& b) {
    return a.size() < b.size();
}

int main() {
    std::vector<std::string> names{"ali", "bo", "cy", "dee", "eve", "jo"};
    std::stable_sort(names.begin(), names.end(), shorter);
    for (const std::string& name : names) {
        std::cout << name << ' ';
    }
    std::cout << '\n';
    std::cout << std::is_sorted(names.begin(), names.end(), shorter) << '\n';
}
