#include "shop.h"

static int scale(int value) {
    return value * 2;
}

int price(int base) {
    return scale(base);
}
