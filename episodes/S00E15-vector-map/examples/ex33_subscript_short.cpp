// example: ex33_subscript_short
// purpose: Show in a Short that reading a missing key with operator[] adds the key.
// expect: ok
// in-video: yes
#include <iostream>
#include <map>
#include <string>
int main() {
    std::map<std::string, int> ages;
    ages.insert({"Ali", 25});
    std::cout << ages["Zoe"] << '\n';
    std::cout << ages.size() << '\n';
}
