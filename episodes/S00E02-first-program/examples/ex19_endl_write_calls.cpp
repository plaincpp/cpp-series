// example: ex19_endl_write_calls
// purpose: Write 1000 lines with std::endl or with a new-line character, so strace can count the write calls.
// expect: ok
// stdin: endl
#include <iostream>
#include <string>

int main() {
    std::string mode;
    std::cin >> mode;
    for (int i = 0; i < 1000; ++i) {
        if (mode == "endl") {
            std::cout << "line" << std::endl;
        } else {
            std::cout << "line" << '\n';
        }
    }
}
