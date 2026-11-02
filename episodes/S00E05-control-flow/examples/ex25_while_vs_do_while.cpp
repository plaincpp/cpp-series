// example: ex25_while_vs_do_while
// purpose: Compare while and do-while: a do-while body runs one time before the first check.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int count = 0;
    while (count > 0) {
        std::cout << "while\n";
    }
    do {
        std::cout << "do-while\n";
    } while (count > 0);
}
