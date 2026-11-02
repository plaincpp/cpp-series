// example: ex11_time_split
// purpose: Use / and % to split a count of seconds into hours, minutes and seconds.
// expect: ok
#include <iostream>

int main() {
    int total_seconds = 3725;
    int hours = total_seconds / 3600;
    int minutes = total_seconds % 3600 / 60;
    int seconds = total_seconds % 60;
    std::cout << hours << ':' << minutes << ':' << seconds << '\n';
}
