// example: ex10_unused_variable
// purpose: Show a program that builds with no message, but -Wall finds an unused variable.
// expect: ok
#include <iostream>

int main() {
    int width = 8;
    int height = 5;
    int area = width * height;
    std::cout << "Area: " << width * height << '\n';
}
