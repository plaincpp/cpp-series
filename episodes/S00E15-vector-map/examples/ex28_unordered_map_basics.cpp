// example: ex28_unordered_map_basics
// purpose: Use std::unordered_map with the same operations as std::map to store and find values by key.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> prices;
    prices["tea"] = 3;
    prices["cake"] = 5;
    prices.insert({"milk", 2});
    std::cout << prices.at("cake") << '\n';
    std::cout << std::boolalpha << prices.contains("juice") << '\n';
    std::cout << prices.size() << '\n';
}
