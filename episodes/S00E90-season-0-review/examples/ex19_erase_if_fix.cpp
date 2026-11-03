// example: ex19_erase_if_fix
// purpose: Use std::erase_if with a lambda to remove the even values in one safe call.
// expect: ok
// stdin: 5 8 6 3
#include <iostream>
#include <vector>
int main() {
    std::vector<int> values;
    int value = 0;
    while (std::cin >> value) {
        values.push_back(value);
    }
    auto removed = std::erase_if(values, [](int v) { return v % 2 == 0; });
    std::cout << removed << ' ' << values.size() << '\n';
    for (int v : values) {
        std::cout << v << ' ';
    }
    std::cout << '\n';
}
