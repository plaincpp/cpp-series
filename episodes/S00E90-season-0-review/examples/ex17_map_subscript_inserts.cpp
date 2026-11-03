// example: ex17_map_subscript_inserts
// purpose: Show that operator[] on a std::map adds a missing key with the value 0.
// expect: ok
// in-video: yes
#include <iostream>
#include <map>
#include <string>
int main() {
    std::map<std::string, int> stock{{"fig", 3}};
    if (stock["pear"] > 0) {
        std::cout << "pear in stock\n";
    }
    std::cout << stock.size() << '\n';
}
