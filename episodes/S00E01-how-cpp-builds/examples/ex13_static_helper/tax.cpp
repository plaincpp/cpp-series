#include "shop.h"

static int scale(int value) {
    return value / 10;
}

int tax(int amount) {
    return scale(amount);
}
