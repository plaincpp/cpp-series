// example: ex12_immediately_invoked
// purpose: Use a lambda that runs at once to give a const variable a value from several steps.
// expect: ok
// stdin: 14
#include <iostream>
#include <string>

int main() {
    int hour = 0;
    std::cin >> hour;
    const std::string greeting = [hour]() {
        if (hour < 12) {
            return std::string("Good morning");
        }
        return std::string("Good afternoon");
    }();
    std::cout << greeting << '\n';
}
