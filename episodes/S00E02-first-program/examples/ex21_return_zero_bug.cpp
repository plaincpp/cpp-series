// example: ex21_return_zero_bug
// purpose: Show the bug: the program reports bad input, but returns 0, so the shell sees success.
// expect: ok
// stdin: -4
// in-video: yes
#include <cstdlib>
#include <iostream>

int main() {
    int age = 0;
    std::cin >> age;
    if (age < 0) {
        std::cerr << "error: the age must be 0 or more\n";
        return 0;
    }
    std::cout << "age: " << age << '\n';
    return EXIT_SUCCESS;
}
