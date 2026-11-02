// example: ex07_pointer_to_pointer
// purpose: Show that a pointer is an object with an address, so a second pointer can point to it.
// expect: ok
#include <iostream>

int main() {
    int score = 10;
    int* ptr = &score;
    int** ptr_to_ptr = &ptr;
    **ptr_to_ptr = 30;
    std::cout << score << '\n';
    std::cout << std::boolalpha << (*ptr_to_ptr == &score) << '\n';
}
