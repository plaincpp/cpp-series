// example: ex14_const_ref_only
// purpose: Show that a const reference parameter accepts lvalues and rvalues when no int&& overload exists.
// expect: ok
#include <iostream>

void show(const int& value) {
    std::cout << value << '\n';
}

int main() {
    int count = 5;
    show(count);
    show(42);
    show(count + 1);
}
