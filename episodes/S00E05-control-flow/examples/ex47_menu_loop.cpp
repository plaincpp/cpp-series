// example: ex47_menu_loop
// purpose: Use a while loop, a switch, break and default together in a small command menu.
// expect: ok
// stdin: a b x q a
#include <iostream>

int main() {
    char command = ' ';
    while (std::cin >> command) {
        if (command == 'q') {
            std::cout << "quit\n";
            break;
        }
        switch (command) {
        case 'a':
            std::cout << "add\n";
            break;
        case 'b':
            std::cout << "back\n";
            break;
        default:
            std::cout << "unknown " << command << '\n';
        }
    }
    std::cout << "end\n";
}
