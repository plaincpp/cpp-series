#include "invoice.h"

namespace {

int scale(int value) {
    return value * 100;
}

}

int invoice_cents(int euros) {
    return scale(euros);
}
