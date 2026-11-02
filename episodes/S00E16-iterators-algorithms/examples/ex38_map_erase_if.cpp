// example: ex38_map_erase_if
// purpose: Use std::erase_if on a std::map: the predicate gets each key-value pair.
// expect: ok
#include <iostream>
#include <map>
#include <string>
#include <utility>

bool is_minor(const std::pair<const std::string, int>& entry) {
    return entry.second < 18;
}

int main() {
    std::map<std::string, int> ages{
        {"Ali", 30}, {"Bo", 12}, {"Cy", 41}, {"Dee", 17}};
    auto removed = std::erase_if(ages, is_minor);
    std::cout << removed << '\n';
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        std::cout << it->first << ' ' << it->second << '\n';
    }
}
