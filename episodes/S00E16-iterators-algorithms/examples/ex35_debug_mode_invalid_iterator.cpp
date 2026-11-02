// example: ex35_debug_mode_invalid_iterator
// purpose: Show that the libstdc++ debug mode stops the push_back loop at the first use of the invalid iterator.
// expect: runtime-error
// expect-match: singular iterator
// flags: -D_GLIBCXX_DEBUG
// stdin: 1
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    int bonus = 0;
    std::cin >> bonus;
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        if (*it > 28) {
            ages.push_back(*it + bonus);
        }
    }
    std::cout << ages.size() << '\n';
}
