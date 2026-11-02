// example: ex52_case_logical_or_pitfall
// purpose: Show that case 'y' || 'Y' is the label 1, not two labels. Use grouped labels.
// expect: ok
#include <iostream>

int main() {
    char answer = 'Y';
    switch (answer) {
    case 'y' || 'Y':
        std::cout << "yes\n";
        break;
    default:
        std::cout << "no\n";
    }
}
