// example: ex36_range_for_string
// purpose: Use a range-for loop to visit each character of a std::string.
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string text = "hello world";
    int count = 0;
    for (char letter : text) {
        if (letter == 'o') {
            ++count;
        }
    }
    std::cout << count << '\n';
}
