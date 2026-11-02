#include "price.h"

Money add_tax(Money price) {
    return Money{price.cents + price.cents / 5};
}
