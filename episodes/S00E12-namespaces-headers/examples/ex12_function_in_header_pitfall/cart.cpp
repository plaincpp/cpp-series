#include "cart.h"
#include "tax.h"

int cart_total(int first, int second) {
    return add_tax(first + second);
}
