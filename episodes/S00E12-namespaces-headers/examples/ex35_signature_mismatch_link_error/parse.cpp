#include "parse.h"
#include <string_view>

int parse(std::string_view text) {
    return static_cast<int>(text.size());
}
