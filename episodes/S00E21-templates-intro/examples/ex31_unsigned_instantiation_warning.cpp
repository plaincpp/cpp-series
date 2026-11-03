// example: ex31_unsigned_instantiation_warning
// purpose: Show that one template can be correct for int and wrong for unsigned, and that the warning names the instantiation.
// expect: ok
// in-video: no
#include <iostream>
template <typename T>
bool below_limit(T value, int limit) {
    return value < limit;
}
int main() {
    std::cout << below_limit(5, -1) << '\n';
    std::cout << below_limit(5u, -1) << '\n';
}
