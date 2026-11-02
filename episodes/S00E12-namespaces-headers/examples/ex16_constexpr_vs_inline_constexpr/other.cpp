#include "other.h"
#include "config.h"

const int* retries_address() {
    return &max_retries;
}

const int* users_address() {
    return &max_users;
}
