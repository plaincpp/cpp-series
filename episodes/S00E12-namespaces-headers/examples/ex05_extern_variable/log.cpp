#include "log.h"
#include "counter.h"

void log_request() {
    ++request_count;
}
