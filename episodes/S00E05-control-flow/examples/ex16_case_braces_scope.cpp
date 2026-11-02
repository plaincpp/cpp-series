// example: ex16_case_braces_scope
// purpose: Put braces around a case body. The scope of its variable then ends before the next label.
// expect: ok
#include <iostream>

int main() {
    int option = 2;
    switch (option) {
    case 1: {
        int count = 10;
        std::cout << count << '\n';
        break;
    }
    case 2:
        std::cout << "two\n";
        break;
    }
}
