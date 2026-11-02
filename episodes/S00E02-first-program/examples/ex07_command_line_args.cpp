// example: ex07_command_line_args
// purpose: Show the second form of main, which gets the command-line arguments.
// expect: ok
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "argc: " << argc << '\n';
    for (int i = 1; i < argc; ++i) {
        std::cout << i << ": " << argv[i] << '\n';
    }
}
