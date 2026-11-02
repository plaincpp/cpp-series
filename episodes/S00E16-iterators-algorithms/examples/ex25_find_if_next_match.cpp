// example: ex25_find_if_next_match
// purpose: Use std::find_if with a predicate, and start the next search after the last match.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

bool is_minor(int age) {
    return age < 18;
}

int main() {
    std::vector<int> ages{30, 12, 41, 17};
    auto it = std::find_if(ages.begin(), ages.end(), is_minor);
    std::cout << *it << " at " << it - ages.begin() << '\n';
    auto next = std::find_if(it + 1, ages.end(), is_minor);
    std::cout << *next << " at " << next - ages.begin() << '\n';
    auto none = std::find_if(next + 1, ages.end(), is_minor);
    std::cout << (none == ages.end()) << '\n';
}
