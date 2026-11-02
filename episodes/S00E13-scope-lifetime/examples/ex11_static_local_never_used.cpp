// example: ex11_static_local_never_used
// purpose: Show that a static local variable in a function that never runs never starts.
// expect: ok
#include <iostream>

int load_limit() {
    std::cout << "load\n";
    return 100;
}

int get_limit() {
    static int limit = load_limit();
    return limit;
}

int main() {
    std::cout << "main only\n";
}
