// example: ex04_missing_link_pitfall
// purpose: Show the undefined reference error when the executable does not link to the library. The folder has no geometry.cpp, so verify-code links main.cpp alone. captured/capture.sh copies geometry.cpp from ex03 and proves the CMake link error.
// expect: link-error
// expect-match: undefined reference to `geometry::area(int, int)'
// in-video: yes
#include "geometry.h"
#include <iostream>

int main() {
    std::cout << "area: " << geometry::area(3, 4) << '\n';
    std::cout << "perimeter: " << geometry::perimeter(3, 4) << '\n';
}
