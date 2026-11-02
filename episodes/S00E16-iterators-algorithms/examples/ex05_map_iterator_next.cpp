// example: ex05_map_iterator_next
// purpose: Use a map iterator: it points to a key-value pair, and it moves one step at a time.
// expect: ok
#include <iostream>
#include <iterator>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages{{"Cy", 41}, {"Ali", 30}, {"Bo", 25}};
    auto it = ages.begin();
    std::cout << it->first << ' ' << it->second << '\n';
    ++it;
    std::cout << it->first << '\n';
    auto last = std::prev(ages.end());
    std::cout << last->first << '\n';
    std::cout << std::distance(ages.begin(), ages.end()) << '\n';
    std::cout << std::next(ages.begin(), 2)->second << '\n';
}
