// example: ex30_subscript_const_overloads
// purpose: Write a const and a non-const operator[], so that a const object can read but cannot write.
// expect: ok
// in-video: no
#include <array>
#include <cstddef>
#include <iostream>
class Scores {
    std::array<int, 3> values_{10, 20, 30};
public:
    int& operator[](std::size_t i) { return values_[i]; }
    const int& operator[](std::size_t i) const { return values_[i]; }
};
void show(const Scores& s) {
    std::cout << s[0] << ' ' << s[1] << '\n';
}
int main() {
    Scores s;
    s[1] = 25;
    show(s);
}
