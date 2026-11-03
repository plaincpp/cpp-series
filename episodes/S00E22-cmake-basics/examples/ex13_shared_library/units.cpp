#include "units.h"

namespace units {
int to_celsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
}
