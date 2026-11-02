// example: ex29_assign_in_condition_pitfall
// purpose: Show that = in an if condition assigns a value, so the condition is true.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int errors = 0;
    if (errors = 3) {
        std::cout << "build failed\n";
    }
    std::cout << errors << '\n';
}
