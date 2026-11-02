#include "discount.h"

int scale(int value) {
    return value / 10;
}

int discount(int cents) {
    return scale(cents);
}
