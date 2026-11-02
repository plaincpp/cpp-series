#include "textlib.h"

std::string repeat(const std::string& word, int times) {
    std::string result;
    for (int i = 0; i < times; ++i) {
        result += word;
    }
    return result;
}
