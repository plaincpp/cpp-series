#include "invoice.h"

namespace {

struct Line {
    int price;
    int count;
};

}

int invoice_total() {
    Line lines[] = {{3, 2}, {5, 1}};
    int total = 0;
    for (const Line& line : lines) {
        total += line.price * line.count;
    }
    return total;
}
