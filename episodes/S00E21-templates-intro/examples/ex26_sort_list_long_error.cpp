// example: ex26_sort_list_long_error
// purpose: Show a long template error: std::sort needs random-access iterators, and std::list does not have them.
// expect: compile-error
// expect-match: _List_iterator<int>
// in-video: yes
#include <algorithm>
#include <iostream>
#include <list>
int main() {
    std::list<int> scores{30, 10, 20};
    std::sort(scores.begin(), scores.end());
    std::cout << scores.front() << '\n';
}
