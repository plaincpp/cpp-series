// example: ex47_double_min_lowest
// purpose: Show that numeric_limits<double>::min() is the smallest positive normal value, and lowest() is the most negative value.
// expect: ok
#include <iostream>
#include <limits>

int main() {
    using std::numeric_limits;
    std::cout << numeric_limits<double>::min() << '\n';
    std::cout << numeric_limits<double>::lowest() << '\n';
    std::cout << numeric_limits<int>::min() << '\n';
}
