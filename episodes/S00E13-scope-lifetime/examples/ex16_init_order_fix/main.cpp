// example: ex16_init_order_fix
// purpose: Use a function with a static local variable to start a shared value before its first use.
// in-video: yes
// expect: ok
#include <iostream>
#include <string>

extern std::string greeting;

int main() {
    std::cout << greeting << '\n';
}
