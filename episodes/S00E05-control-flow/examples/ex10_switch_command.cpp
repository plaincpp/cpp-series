// example: ex10_switch_command
// purpose: Use switch with case labels, break and default to select an action for a command.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    char command = 's';
    switch (command) {
    case 'r':
        std::cout << "run\n";
        break;
    case 's':
        std::cout << "stop\n";
        break;
    default:
        std::cout << "unknown\n";
    }
}
