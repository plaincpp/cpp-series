#include "log.h"
#include "counter.h"

void log_hit() {
    ++hits;
}

int log_hits() {
    return hits;
}
