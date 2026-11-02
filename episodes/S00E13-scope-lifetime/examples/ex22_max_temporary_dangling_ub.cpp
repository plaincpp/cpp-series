// example: ex22_max_temporary_dangling_ub
// purpose: Show that a reference from std::max to a temporary dangles after the statement.
// in-video: yes
// expect: ub
// expect-match: stack-use-after-scope
// stdin: 3 8
#include <algorithm>
#include <iostream>

int main() {
    int low = 0;
    int high = 0;
    std::cin >> low >> high;
    const int& biggest = std::max(low + 1, high + 1);
    std::cout << biggest << '\n';
}
