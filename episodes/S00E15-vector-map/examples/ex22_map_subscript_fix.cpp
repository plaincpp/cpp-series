// example: ex22_map_subscript_fix
// purpose: Use find to read a value that can be missing, so the map does not change.
// expect: ok
// in-video: yes
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores{{"Ali", 90}, {"Mia", 85}};
    std::cout << scores.size() << '\n';
    auto it = scores.find("Zoe");
    if (it != scores.end() && it->second > 50) {
        std::cout << "Zoe passed\n";
    }
    std::cout << scores.size() << '\n';
}
