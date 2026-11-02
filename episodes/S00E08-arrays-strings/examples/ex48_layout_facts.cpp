// example: ex48_layout_facts
// purpose: Show that 2[scores] is the same as scores[2], and the object size of std::vector<int> (x86-64 Linux, libstdc++).
// expect: ok
#include <iostream>
#include <vector>

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    std::cout << 2[scores] << ' ' << scores[2] << '\n';
    std::cout << sizeof(std::vector<int>) << '\n';
}
