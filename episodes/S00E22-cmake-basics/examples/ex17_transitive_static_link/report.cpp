#include "report.h"
#include "words.h"

std::string make_report(const std::string& text) {
    return "words: " + std::to_string(count_words(text));
}
