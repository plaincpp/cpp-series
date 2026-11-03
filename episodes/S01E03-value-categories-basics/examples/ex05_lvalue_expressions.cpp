// example: ex05_lvalue_expressions
// purpose: Show three lvalue expressions that are not names: ++x, a reference return and a conditional.
// expect: ok
#include <iostream>
#include <vector>

int& at(std::vector<int>& values, int index) {
    return values[index];
}

int main() {
    int count = 1;
    ++count = 10;
    std::vector<int> values{1, 2, 3};
    at(values, 0) = 7;
    int low = 0;
    int high = 0;
    bool pick_high = true;
    (pick_high ? high : low) = 99;
    std::cout << count << ' ' << values[0] << ' ' << low << ' ' << high << '\n';
}
