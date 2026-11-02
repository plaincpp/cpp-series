// example: ex18_map_insert_vs_assign
// purpose: Compare insert, insert_or_assign, operator[] and erase on a key that is already in the map.
// expect: ok
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> stock{{"apple", 5}};
    auto [it, added] = stock.insert({"apple", 9});
    std::cout << std::boolalpha << added << ' ' << it->second << '\n';
    stock.insert_or_assign("apple", 9);
    std::cout << stock.at("apple") << '\n';
    stock["apple"] = 12;
    std::cout << stock.at("apple") << '\n';
    stock["pear"] = 2;
    std::cout << stock.size() << '\n';
    std::cout << stock.erase("apple") << ' ' << stock.erase("plum") << '\n';
    std::cout << stock.size() << ' ' << stock.contains("apple") << '\n';
}
