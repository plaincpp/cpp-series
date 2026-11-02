#include "ruler.h"

#include <iostream>
#include <string>

void draw_line(int width, char fill) {
    std::cout << std::string(width, fill) << '\n';
}
