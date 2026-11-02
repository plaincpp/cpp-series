// example: ex48_long_long_width
// purpose: Check that long long has 8 bytes; capture.sh builds it for five targets, also for 8-bit AVR.
// expect: ok
static_assert(sizeof(long long) == 8, "long long has 8 bytes");

int main() {}
