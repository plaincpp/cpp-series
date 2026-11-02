// example: ex18_list_find_and_sort
// purpose: Show that std::find works on a std::list, and that the list sorts with its member function sort.
// expect: ok
#include <algorithm>
#include <iostream>
#include <list>

int main() {
    std::list<int> ages{30, 25, 41};
    auto it = std::find(ages.begin(), ages.end(), 25);
    std::cout << (it != ages.end()) << '\n';
    ages.sort();
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
}
