// example: ex18_before_main
// purpose: Show that the constructor of a global object runs before main starts.
// expect: ok
#include <iostream>

struct Logger {
    Logger() { std::cout << "1. before main\n"; }
    ~Logger() { std::cout << "3. after main\n"; }
};

Logger logger;

int main() {
    std::cout << "2. in main\n";
}
