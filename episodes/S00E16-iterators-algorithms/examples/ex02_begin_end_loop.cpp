// example: ex02_begin_end_loop
// purpose: Use begin and end to visit every element, and show that end minus begin is the size.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    std::cout << ages.end() - ages.begin() << '\n';
}
