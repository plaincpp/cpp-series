// example: ex16_map_basics
// purpose: Use std::map to store values by key and show that a loop visits the keys in sorted order.
// expect: ok
// in-video: yes
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages;
    ages["Mia"] = 31;
    ages["Ali"] = 25;
    ages["Zoe"] = 19;
    ages.insert({"Ben", 40});
    for (const auto& [name, age] : ages) {
        std::cout << name << ' ' << age << '\n';
    }
}
