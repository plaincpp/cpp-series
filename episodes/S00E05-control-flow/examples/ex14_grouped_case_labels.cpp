// example: ex14_grouped_case_labels
// purpose: Use several case labels for one group of statements. Empty labels cause no warning.
// expect: ok
#include <iostream>

int main() {
    char letter = 'e';
    switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        std::cout << "vowel\n";
        break;
    default:
        std::cout << "consonant\n";
    }
}
