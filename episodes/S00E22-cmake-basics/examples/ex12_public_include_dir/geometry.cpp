#include "geometry.h"

namespace geometry {
int area(int width, int height) {
    return width * height;
}

int perimeter(int width, int height) {
    return 2 * (width + height);
}
}
