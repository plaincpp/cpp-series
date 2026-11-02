// example: ex29_erase_if
// purpose: Use C++20 std::erase_if and std::erase: they remove the elements and return the number removed.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

bool is_minor(int age) { return age < 18; }

int main() {
    std::vector<int> ages{30, 12, 41, 17, 19};
    auto removed = std::erase_if(ages, is_minor);
    std::cout << removed << '\n';
    for (int age : ages) std::cout << age << ' ';
    std::cout << '\n';
    std::erase(ages, 41);
    std::cout << ages.size() << '\n';
}
