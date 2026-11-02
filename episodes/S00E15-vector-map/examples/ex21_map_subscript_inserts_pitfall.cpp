// example: ex21_map_subscript_inserts_pitfall
// purpose: Show that operator[] adds a key that is not in the map, also when the code only reads.
// expect: ok
// in-video: yes
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores{{"Ali", 90}, {"Mia", 85}};
    std::cout << scores.size() << '\n';
    if (scores["Zoe"] > 50) {
        std::cout << "Zoe passed\n";
    }
    std::cout << scores.size() << '\n';
}
