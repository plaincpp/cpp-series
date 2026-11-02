// example: ex41_break_in_switch_pitfall
// purpose: Show that a break in a switch stops only the switch, not the loop around it.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    char commands[] = {'a', 'q', 'b'};
    for (char command : commands) {
        switch (command) {
        case 'q':
            std::cout << "quit\n";
            break;
        default:
            std::cout << "do " << command << '\n';
        }
    }
    std::cout << "end\n";
}
