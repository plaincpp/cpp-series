// example: ex08_sizes_x86_64
// purpose: Show on x86-64 Linux that each pointer has 8 bytes, and sizeof a reference gives the object size.
// expect: ok
#include <iostream>

int main() {
    char letter = 'A';
    double price = 2.5;
    char& letter_ref = letter;
    char* letter_ptr = &letter;
    double* price_ptr = &price;
    std::cout << sizeof(letter_ref) << '\n';
    std::cout << sizeof(letter_ptr) << '\n';
    std::cout << sizeof(price_ptr) << '\n';
}
