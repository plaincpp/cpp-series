// example: ex42_quit_break_fixed
// purpose: Show the correction: an if with break outside the switch stops the loop.
// expect: ok
#include <iostream>
int main() {
    char commands[] = {'a', 'q', 'b'};
    for (char command : commands) {
        if (command == 'q') {
            std::cout << "quit\n";
            break;
        }
        std::cout << "do " << command << '\n';
    }
    std::cout << "end\n";
}
