// example: ex42_ms_per_year_overflow
// purpose: Show that UBSan reports the signed overflow of the milliseconds in one year in int.
// expect: ub
// expect-match: signed integer overflow
#include <iostream>

int main() {
    int seconds_per_year = 365 * 24 * 60 * 60;
    int ms_per_year = seconds_per_year * 1000;
    std::cout << ms_per_year << '\n';
}
