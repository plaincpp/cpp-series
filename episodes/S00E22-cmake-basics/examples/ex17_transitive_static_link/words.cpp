#include "words.h"
#include <sstream>

int count_words(const std::string& text) {
    std::istringstream input{text};
    std::string word;
    int count = 0;
    while (input >> word) {
        ++count;
    }
    return count;
}
