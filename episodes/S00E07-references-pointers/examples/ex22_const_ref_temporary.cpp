// example: ex22_const_ref_temporary
// purpose: Show that a const reference accepts a literal and a temporary value.
// expect: ok
#include <iostream>

void show(const int& value) {
    std::cout << value << '\n';
}

int main() {
    const int& total = 2 + 3;
    show(total);
    show(50);
}
