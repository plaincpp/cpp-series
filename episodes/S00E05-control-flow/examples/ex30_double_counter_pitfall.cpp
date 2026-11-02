// example: ex30_double_counter_pitfall
// purpose: Show that a double loop counter does not reach 1.0 exactly. Use an integer counter.
// expect: ok
#include <iostream>

int main() {
    int steps = 0;
    for (double x = 0.0; x != 1.0 && steps < 100; x += 0.1) {
        ++steps;
    }
    std::cout << "!= 1.0: " << steps << " steps\n";
    int runs = 0;
    for (double x = 0.0; x < 1.0; x += 0.1) {
        ++runs;
    }
    std::cout << "< 1.0: " << runs << " runs\n";
}
