#include "discount.h"

namespace {

struct Line {
    int percent;
};

}

int best_discount() {
    Line lines[] = {{10}, {25}, {15}};
    int best = 0;
    for (const Line& line : lines) {
        if (line.percent > best) {
            best = line.percent;
        }
    }
    return best;
}
