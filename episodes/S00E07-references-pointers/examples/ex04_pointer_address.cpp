// example: ex04_pointer_address
// purpose: Use & to get the address of a variable and * to change the variable through a pointer.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int score = 10;
    int* ptr = &score;
    *ptr = 25;
    std::cout << score << '\n';
    std::cout << *ptr << '\n';
    std::cout << std::boolalpha << (ptr == &score) << '\n';
}
