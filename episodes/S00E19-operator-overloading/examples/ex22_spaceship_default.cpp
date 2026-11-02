// example: ex22_spaceship_default
// purpose: Use a default operator<=> to get all six comparisons, which compare the members in order.
// expect: ok
// in-video: no
#include <algorithm>
#include <compare>
#include <iostream>
#include <vector>
struct Version {
    int major, minor, patch;
    auto operator<=>(const Version&) const = default;
};
int main() {
    Version v1{1, 2, 3};
    Version v2{1, 10, 0};
    std::cout << std::boolalpha;
    std::cout << (v1 < v2) << ' ' << (v1 >= v2) << ' ';
    std::cout << (v1 == Version{1, 2, 3}) << ' ' << (v1 != v2) << '\n';
    std::vector<Version> all{{2, 0, 0}, v2, v1};
    std::sort(all.begin(), all.end());
    for (const Version& v : all) {
        std::cout << v.major << '.' << v.minor << '.' << v.patch << '\n';
    }
}
