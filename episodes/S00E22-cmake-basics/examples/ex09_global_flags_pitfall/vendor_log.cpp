#include "vendor_log.h"
#include <iostream>

void log_message(const char* text, int level) {
    std::cout << "[log] " << text << '\n';
}
