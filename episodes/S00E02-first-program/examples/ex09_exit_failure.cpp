// example: ex09_exit_failure
// purpose: Use EXIT_FAILURE and std::cerr to report bad input.
// expect: runtime-error
// expect-match: error: the age must be 0 or more
// stdin: -4
// in-video: yes
#include <cstdlib>
#include <iostream>

int main() {
    int age = 0;
    std::cin >> age;
    if (age < 0) {
        std::cerr << "error: the age must be 0 or more\n";
        return EXIT_FAILURE;
    }
    std::cout << "age: " << age << '\n';
    return EXIT_SUCCESS;
}
