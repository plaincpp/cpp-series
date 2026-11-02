// example: ex01_iterator_walk
// purpose: Show an iterator as a position: star reads the element, ++ moves to the next element.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    auto it = ages.begin();
    std::cout << *it << '\n';
    ++it;
    std::cout << *it << '\n';
    *it = 26;
    std::cout << ages[1] << '\n';
}
