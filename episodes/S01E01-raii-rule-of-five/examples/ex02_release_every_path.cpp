// example: ex02_release_every_path
// purpose: Show that the destructor releases the resource on a normal end, an early return and a throw.
// expect: ok
#include <initializer_list>
#include <iostream>
#include <stdexcept>
struct Guard {
    Guard() { std::cout << "acquire\n"; }
    ~Guard() { std::cout << "release\n"; }
};
void work(int mode) {
    Guard guard;
    if (mode == 1) return;
    if (mode == 2) throw std::runtime_error{"failed"};
    std::cout << "done\n";
}
int main() {
    for (int mode : {0, 1, 2}) {
        try {
            work(mode);
        } catch (const std::exception& e) {
            std::cout << "caught: " << e.what() << '\n';
        }
    }
}
