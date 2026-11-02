// example: ex17_sort_list_error
// purpose: Show that std::sort needs random-access iterators, so it does not compile on a std::list.
// expect: compile-error
// expect-match: _List_iterator<int>
// in-video: yes
#include <algorithm>
#include <list>

int main() {
    std::list<int> ages{30, 25, 41};
    std::sort(ages.begin(), ages.end());
}
