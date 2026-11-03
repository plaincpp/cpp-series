#include "stats.h"

double mean(const std::vector<int>& values) {
    double sum = 0.0;
    for (int v : values)
        sum += v;
    return sum / static_cast<double>(values.size());
}
