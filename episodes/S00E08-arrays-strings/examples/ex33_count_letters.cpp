// example: ex33_count_letters
// purpose: Use a range-for loop over a std::string to count one letter.
// expect: ok
#include <iostream>
#include <string>

int count_letter(const std::string& text, char letter) {
    int count = 0;
    for (char c : text) {
        if (c == letter) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::cout << count_letter("banana", 'a') << '\n';
    std::cout << count_letter("C++", '+') << '\n';
}
