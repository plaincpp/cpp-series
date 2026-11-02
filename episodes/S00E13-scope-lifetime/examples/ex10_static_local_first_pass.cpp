// example: ex10_static_local_first_pass
// purpose: Show that a static local variable starts when control first passes its declaration.
// expect: ok
// in-video: yes
#include <iostream>

int load_limit() {
    std::cout << "load\n";
    return 100;
}

int main() {
    std::cout << "main\n";
    for (int i = 0; i < 2; ++i) {
        static int limit = load_limit();
        std::cout << limit << '\n';
    }
}
