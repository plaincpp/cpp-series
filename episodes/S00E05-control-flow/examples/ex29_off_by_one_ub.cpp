// example: ex29_off_by_one_ub
// purpose: Show that the bound i <= count reads past the end of the array, found by the sanitizers.
// expect: ub
// expect-match: out of bounds for type
// stdin: 5
// in-video: yes
#include <iostream>

int main() {
    int scores[5] = {70, 85, 90, 60, 75};
    int count = 0;
    std::cin >> count;
    int total = 0;
    for (int i = 0; i <= count; ++i) {
        total += scores[i];
    }
    std::cout << total << '\n';
}
