// example: ex17_map_find_contains
// purpose: Use find, contains and count to look for a key without a change to the map.
// expect: ok
// in-video: yes
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages{{"Ali", 25}, {"Mia", 31}};
    auto it = ages.find("Mia");
    if (it != ages.end()) {
        std::cout << it->first << ' ' << it->second << '\n';
    }
    std::cout << std::boolalpha << ages.contains("Zoe") << '\n';
    std::cout << ages.count("Ali") << '\n';
    std::cout << ages.size() << '\n';
}
