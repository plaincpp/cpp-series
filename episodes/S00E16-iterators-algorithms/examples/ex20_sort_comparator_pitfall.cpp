// example: ex20_sort_comparator_pitfall
// purpose: Show that a comparator with <= breaks the rule of std::sort, and that the libstdc++ debug mode finds it.
// expect: runtime-error
// expect-match: irreflexive requirements
// flags: -D_GLIBCXX_DEBUG
#include <algorithm>
#include <iostream>
#include <vector>

bool not_greater(int a, int b) {
    return a <= b;
}

int main() {
    std::vector<int> ages{30, 25, 41, 25};
    std::sort(ages.begin(), ages.end(), not_greater);
    std::cout << ages.size() << '\n';
}
