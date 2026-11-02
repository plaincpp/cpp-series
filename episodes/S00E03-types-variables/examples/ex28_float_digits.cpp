// example: ex28_float_digits
// purpose: Show the precision of float and double with std::numeric_limits, and why 17 digits print a double exactly.
// expect: ok
#include <iostream>
#include <limits>

int main() {
    using std::numeric_limits;
    std::cout << "float  bits " << numeric_limits<float>::digits
              << " digits10 " << numeric_limits<float>::digits10
              << " max_digits10 " << numeric_limits<float>::max_digits10 << '\n';
    std::cout << "double bits " << numeric_limits<double>::digits
              << " digits10 " << numeric_limits<double>::digits10
              << " max_digits10 " << numeric_limits<double>::max_digits10 << '\n';
}
