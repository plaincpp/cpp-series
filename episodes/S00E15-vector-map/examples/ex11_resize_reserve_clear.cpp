// example: ex11_resize_reserve_clear
// purpose: Compare reserve, resize, clear and shrink_to_fit by their effect on size and capacity.
// expect: ok
#include <iostream>
#include <vector>

void show(const char* step, const std::vector<int>& values) {
    std::cout << step << ": size " << values.size()
              << ", capacity " << values.capacity() << '\n';
}

int main() {
    std::vector<int> values;
    values.reserve(10);
    show("reserve(10)", values);
    values.resize(4);
    show("resize(4)", values);
    values.push_back(9);
    show("push_back", values);
    std::cout << "values[3]: " << values[3] << '\n';
    values.clear();
    show("clear", values);
    values.shrink_to_fit();
    show("shrink_to_fit", values);
}
