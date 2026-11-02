// example: ex07_char_number
// purpose: Show that a char holds a small integer code, and that std::cout prints a char as a character.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    char letter = 'A';
    int code = letter;
    char next = letter + 1;
    std::cout << letter << ' ' << code << ' ' << next << '\n';
    std::cout << '7' - '0' << '\n';
}
