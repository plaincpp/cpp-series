// example: ex07_sign_compare_werror
// purpose: Show the warning for a compare of a signed int with the unsigned size of a vector.
// expect: compile-error
// expect-match: comparison of integer
// flags: -Werror
// in-video: yes
#include <iostream>
#include <vector>
int main() {
    std::vector<int> values{1, 2, 3};
    int index = -1;
    if (index < values.size()) {
        std::cout << "inside\n";
    }
}
