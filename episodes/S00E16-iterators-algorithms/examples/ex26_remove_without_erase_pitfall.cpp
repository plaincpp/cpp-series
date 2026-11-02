// example: ex26_remove_without_erase_pitfall
// purpose: Show that std::remove does not change the size of a vector, and that both compilers warn about it.
// expect: ok
// in-video: yes
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 0, 41, 0};
    std::remove(ages.begin(), ages.end(), 0);
    std::cout << ages.size() << '\n';
}
