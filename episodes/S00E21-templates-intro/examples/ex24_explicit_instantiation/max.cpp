#include "max.h"
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
template int max_of<int>(int, int);
template double max_of<double>(double, double);
